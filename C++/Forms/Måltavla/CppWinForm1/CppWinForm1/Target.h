#pragma once
#include <cstdlib>
#include <cmath>

using namespace System::Drawing;
using namespace System;
ref class Target 
{
public:
	// Deklarerar variabler
	float x, y, radius, parts;
	int dx, dy;

	// Avg�r om punkten finns p� tavlan, ger en po�ng beroende p� hur n�r mitten skottet tr�ffade
	bool OnTarget(Point^ p, int& points) {
		// Formeln f�r avst�ndet fr�n mitten av tavlan till punkten
		int distance = std::sqrt(pow(((y + radius) - p->Y), 2) + pow(((x + radius) - p->X), 2));
		// Mitt i ger 200 po�ng 
		if (distance == 0) {
			points == 200;
			return true;
		}
		// Om avst�ndet fr�n mitten �r mindre �n radien
		else if (distance <= radius) {
			// H�jden p� varje av de fem zonerna
			int zoneWidth = Convert::ToInt32(radius / 5);
			// R�knar ut vilken zon som punkten ligger i 
			int zone = distance / zoneWidth;
			// 20 dras bort f�r varje zon bort fr�n mitten
			points = 100 - zone * 20 ;
			return true;
		}		
		// Om skottet inte har tr�ffat m�ltavlan
		return false;
	}

	// K�rs n�r f�nstret ska ritas om
	void Draw(Graphics^ g) {
		// Pennan anv�nds f�r att rita kanten p� m�ltavlan
		Pen^ pen = gcnew Pen(Color::Black,5);

		// Penseln som ritar ringarna
		SolidBrush^ b = gcnew SolidBrush(Color::White);

		// Ett f�lt med f�rger som kan anv�ndas till penseln
		array<Color>^ colors = { Color::DarkRed, Color::Yellow, Color::Red, Color::Blue, Color::Black, Color::Aquamarine, Color::SandyBrown, Color::DarkSalmon, Color::Brown, Color::Green, Color::Orange, Color::MediumSpringGreen, Color::Bisque, Color::PaleGreen, Color::Turquoise, Color::Sienna};

		// Rektangeln d�r cirkeln ska ritas
		int rad = Convert::ToInt32(2 * this->radius);
		Rectangle^ drawTarget = gcnew Rectangle(
			Convert::ToInt32(this->x),
			Convert::ToInt32(this->y),
			rad, rad);

		// Ritar den svarta kanten och den yttersta vita ringen
		g->DrawEllipse(pen, drawTarget->X, drawTarget->Y, drawTarget->Width, drawTarget->Height);
		g->FillEllipse(b, drawTarget->X, drawTarget->Y, drawTarget->Width, drawTarget->Height);

		// Loopar en g�ng f�r varje cirkel som ska ritas
		for (int i = (int)(this->parts - 1); i > 0; i--)
		{
			// Koordinaterna f�r ringen flyttas �t h�ger och ned�t varje g�ng loopen k�rs 
			// justerat efter antalet ringar
			drawTarget->X += this->radius * 1/this->parts;
			drawTarget->Y += this->radius * 1/this->parts;
			// Radien minskar baserat p� antalet ringar som ska ritas
			drawTarget->Width = this->radius * 2 * (float)(i / this->parts);
			drawTarget->Height = drawTarget->Width;
			// Penseln f�r n�sta f�rg i f�ltet
			b->Color = colors[i-1];
			// Cirkeln ritas med de nya v�rdena som nu har satts
			g->FillEllipse(b, drawTarget->X, drawTarget->Y, drawTarget->Width, drawTarget->Height);
		}
	}
};