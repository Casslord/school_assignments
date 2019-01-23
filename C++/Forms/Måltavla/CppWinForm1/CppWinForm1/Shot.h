#pragma once
using namespace System::Windows::Forms;
using namespace System::Drawing;
ref class Shot 
{
public:
	// Koordinaterna
	int x, y;
	// �r skottet aktivt? Tr�ffade den m�ltavlan?
	bool active, hitTarget;
	// Bredden �r 20 pixlar
	int width = 20;

	// Konstruktorn, tar emot en punkt och anv�nder dess koordinater
	Shot(Point^ p) {
		x = p->X;
		y = p->Y;
	}

	// Ritar p� sk�rmen
	void Draw(Graphics^ g) {
		// Ritar bara om skottet �r aktivt
		if (active) {
			// En tunn vit och en tjock svart pensel
			Pen^ p1 = gcnew Pen(Color::White, 3);
			Pen^ p2 = gcnew Pen(Color::Black, 10);

			// Ritar det svarta krysset
			g->DrawLine(p2, x, y, x + width, y + width);
			g->DrawLine(p2, x, y + width, x + width, y);

			// Ritar det vita krysset
			g->DrawLine(p1, x, y, x + width, y + width);
			g->DrawLine(p1, x, y + width, x + width, y);
		}
	}
};