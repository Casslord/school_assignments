// Programmering 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

using namespace std;

float areaCirkel(float radie) {
	double area = radie * radie * M_PI;

	return area;
}
void logString(string utmatning) {
	cout << utmatning << endl;
}
void ritaTriangel(int hojd, char tecken) {
	for (int i = 1; i <= hojd; i++) {
		for (int j = 0; j < i; j++) {
			cout << tecken;
		}
		cout << "\n";
	}
}
void doublesInput(double values[], int& n) {
	cout << "Enter the numbers. End with 0.\n";
	n = 0;
	cin >> values[n];
	while (values[n] != 0) {
		n++;
		cin >> values[n];
	}
}
void doublesOutput(double values[], int n) {
	cout << "The numbers are: ";
	for (int i = 0; i < n; i++) {
		cout << ' ' << values[i];
	}
	cout << endl;
}
double lowestDouble(double values[], int n, double output = false) {
	double lowestValue = values[0];
	for (int i = 1; i < n; i++) {
		if (values[i] < lowestValue) {
			lowestValue = values[i];
		}
	}
	if (output) {
		cout << "The lowest number is: " << lowestValue << endl;
	}
	return lowestValue;
}

//Första program
/*int main()							// Här börjar programmet köra
{
cout << "Mitt första program";	// Här skrivs en text till skärmen
return 0;						// Här avslutas programmet
}*/
//Variabler 
/*int main() {

int x;

x = 59;

x += 4;

x++;

const float pi = 3.1415926535897932;

cout << x << std::endl;
x = -78;
std::cout << x << std::endl;
std::cout << pi << std::endl;

}
*/
//Uppgift 1.4 (Gubbe)
/*int main() {
cout << "   \"\"\"" << endl;
cout << "\\\\     //" << endl;
cout << "  o   o" << endl;
cout << "    U" << endl;
cout << endl;
cout << "   ---" << endl;
}*/
//Mr1Buying 2 cin 
/*
int main() {
string fname;

string lname;

std::cout << "What is your name?" << std::endl;
std::cin >> fname >> lname;
std::cout << "Your name is: " << fname << " " << lname << std::endl;
}
*/
//Övning 2.2 (Summa)
/*
int main() {

int first, second, third;

cout << "Mata in 3 tal (separera med mellanrum): ";
cin >> first >> second >> third;
cout << "Summa: " << first + second + third << endl;
}
*/
//Övning 2.5 (Matte med flyttal)
/*
int main() {

setlocale(LC_ALL, "");

float first, second, third;

cout << "Mata in tre flyttal (separera med mellanrum, använd punkt .):";
cin >> first >> second >> third;
cout << "Summa: " << setprecision(3) << first + second + third << endl;
cout << "Medelvärde: " << setprecision(3) << (first + second + third) / 3 << endl;


}
*/
//Tecken till tal tal till tecken
/*
int main() {

char tecken = 'f';
int tal;

while (tecken != 'e') {
std::cout << "Mata in tecken: ";
std::cin >> tecken;
std::cout << (int)tecken << endl;

std::cout << "Mata in heltal: ";
std::cin >> tal;
std::cout << (char)tal << endl;
}


return 0;
}
*/
//3 tecken på rad 
/*
int main() {

setlocale(LC_ALL, "");

char tecken;
while (tecken != 'e') {
std::cin >> tecken;
std::cout << tecken << (char)(tecken + 1) << (char)(tecken + 2) << endl;
}


return 0;
}
*/
//Övning 2.6
/*
int main() {

double flyt;

cout << "Mata in flyttal: ";
cin >> flyt;

int tal = flyt * 10;
int rest = tal % 10;

if (rest < 5) {
std::cout << "Avrundat: " << (int)flyt << endl;

}
else {
std::cout << "Avrundat: " << (int)(flyt + 1) << endl;
}


return 0;
}
*/
//Mr1Buying 10 logiska operatorer
/*
int main() {

bool x = false || true;

cout << x << endl;

string gender = "Male";
int age = 19;

if (gender == "Female" &&  age >= 20) {
cout << "You can ride the boat!" << endl;
}
else if (gender == "Male" && age >= 23) {
cout << "You can also ride the boat!" << endl;
}
else {cout << "Bring mom or dad!!!" << endl;
}

return 0;
}
*/
//Strängar
/*
int main() {

string text;

cout << "Skriv en text: " << endl;

cin.ignore(1000, '\n');
getline(cin, text);



cout << text.length() << endl;

return 0;
}
*/
//Uppgift 3.1
/*
int main() {

setlocale(LC_ALL, "");

char worthless;

int tal[6];

cout << "Mata in 6 heltal" << endl;

cin >> tal[0] >> tal[1] >> tal[2] >> tal[3] >> tal[4] >> tal[5];

cout << "Fältets innehåll: " << tal << endl;

cout << "Enter e for escape...";
cin >> worthless;

cout << "Du kan få fältvärdena också: " << tal[0] << " " << tal[1] << " " << tal[2] << " " << tal[3] <<  " " << tal[4] << " " << tal[5] << endl;

return 0;
}
*/
//Mata klockan
/*
int main() {

cout << "Skriv in ett klockslag på formen hh:mm, t ex 14:16" << endl;

string input;

getline(cin, input);

int pos = input.find(':');

string hour = input.substr(0, pos);

int lengthMinute = input.length() - (pos + 1);

string minute = input.substr((pos + 1), lengthMinute);

cout << endl << "Timme: " << hour << endl << "Minut: " << minute << endl << endl;

return 0;
}
*/
//Hantera minne
/*
int main() {

double arr[] = { 1,2,3,4,5 };
double *point = arr;

for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
{
cout << &arr[i] << endl;
}
cout << "________________" << endl;
cout << point + 1 << endl;

}
*/
//Övning 4.1
/*
int main() {

setlocale(LC_ALL, "");

double tal1, tal2;
cout << "Mata in två tal: ";
cin >> tal1 >> tal2;
cout << tal1 << '/' << tal2 << " = " << tal1 / tal2 << endl;
cout << tal1 << '%' << tal2 << " = " /*<< tal1 % tal2 << "ERROR" << endl;

return 0;
}
*/
//Övning 6.2
/*
int main() {

setlocale(LC_ALL, "");

int tal1, tal2;

cout << "Skriv in två tal: " << endl;

cin >> tal1 >> tal2;

cout << "Det största talet är ";

if (tal1 > tal2) {
cout << tal1 << endl;
}
else {
cout << tal2 << endl;
}

return 0;
}
*/
//Övning 7.5
/*
int main() {

setlocale(LC_ALL, "");

double längd;
double vind;

while (true) {

cout << endl << "Hur långt hoppade du? " << endl;
cin >> längd;

cout << "Vad var vindstyrkan?" << endl;
cin >> vind;

if (längd > 8.1 && vind <= 2.0) {
cout << "Nytt klubbrekord!" << endl;
}
else {
cout << "Försök igen!" << endl;
}

}

}
*/
//Neat multiplications
/*
int main() {

setlocale(LC_ALL, "");

for (int n = 1; n <= 10; n++) {
for (int m = 1; m <= n; m++) {
cout << m*n << "\t";
}
cout << endl;
}

}
*/
//Primtal
/*
int main() {

setlocale(LC_ALL, "");

int n, i;
bool isPrime = true;

while (true) {

cout << "Skriv in ett primtal om du kan: ";
cin >> n;

for (i = 2; i <= n / 2; i++) {
if ((n % i) == 0) {
isPrime = false;
break;
}
}
if (isPrime) {
cout << "Det är ett primtal" << endl;
}
else {
cout << "Det är inget primtal" << endl;
}
}
}
*/
//Rita o
/*
int main() {

setlocale(LC_ALL, "");

char cells[20][40];
Stopwatch stopwatch(false);

for (int row = 0; row < 20; row++) {
for (int col = 0; col < 40; col++) {
cells[row][col] = 'o';
}

}
stopwatch.Start(false);
while (true) {
for (int row = 0; row < 20; row++) {
for (int col = 0; col < 40; col++) {
cout << cells[row][col];
}

cout << '\n';
unsigned long time = stopwatch.Milliseconds();
while (time - row * 10000 <= 0) {
time = stopwatch.Milliseconds();
}
}
}
}
*/
//Timer
/*
int main() {
Stopwatch stopwatch(true);

for (int i = 1; i < 10; i++)
{
cout << i << endl;
while (stopwatch.Milliseconds() - i*1000 > 0);
}

std::cout << "FIRE!" << std::endl;
}
*/
//Cykeltur till Agda
/*
int main() {

char confirm;
setlocale(LC_ALL, "");

while (true) {
cout << "Du är helt ute och cyklar. ";
getchar();
cout << "Nu delar sig vägen";
getchar();

string svar = "";

while (true) {
cout << "Svänger du åt upp eller ner?" << endl;
cin >> svar;
if (svar == "upp" || svar == "Upp" || svar == "ner" || svar == "Ner") {
break;
}
}

if (svar == "upp" || svar == "Upp") {
cout << "Synd. Du skulle ju åka åt ner." << endl;
}
else {
cout << "Vägen leder dig rakt till rika faster Agda" << endl;
}
}


}
*/
//Deklaration
/*
int main() {

	setlocale(LC_ALL, "");

	double km;
	double år;
	string boende;

	while (true) {

		cout << endl << "Välkommen till tjänsten för deklaration." << endl;
		system("pause");
		cout << endl << "Hur långt har du till jobbet? (i km): ";
		cin >> km;
		cout << endl << "Hur hur många år ska du jobba där?: ";
		cin >> år;
		cout << endl << "Bor du ensam? (ja/nej): ";
		cin >> boende;

		if (km > 50) {
			if (boende == "ja" && år <= 1) {
				cout << endl << "Då har du rätt till ett skatteavdrag!" << endl;
			}
			else if (boende == "nej" && år <= 3) {
			cout << endl << "Då har du rätt till ett skatteavdrag!" << endl;
			}
			else {
				cout << "Du får tyvärr inget skatteavdrag" << endl;
			}
		}
		else {
			cout << "Du får tyvärr inget skatteavdrag" << endl;
		}
	}
}
*/
//Transport
/*
int main() {

setlocale(LC_ALL, "");

int transport;

while (true) {

cout << endl << "Vilken transport vill du använda? \n1 för cykel, 2 för bil, 3 för buss, 4 för tåg: ";
cin >> transport;

switch (transport) {
case 1:
cout << "Trampa på!" << endl;
break;

case 2:
cout << "Plattan i mattan!" << endl;
break;

case 3:
cout << "Hjulen på bussen snurrar runt, runt, runt!" << endl;
break;

case 4:
cout << "Det här börjar spåra ur!" << endl;
break;

default:
cout << "Fel siffra, försök igen!" << endl;
}

}
}
*/
//Slumpen
/*
int main() {

setlocale(LC_ALL, "");

int tal;

while (true) {

cout << "RAND_MAX: " << RAND_MAX << endl;
cout << "Slumptal: ";
for (int i = 0; i < 10; i++) {
cout << rand() % 10 + 4 << ' ';
}

cout << '\n';
system("pause");
cout << "\n\n";

}
}
*/
//Hemligt tal
/*
int main() {

setlocale(LC_ALL, "");

int hemligt_tal;
int gissat;

while (true) {

cout << "Gissa mitt hemliga tal (upp till 10).\n Bara idioter skriver in något som inte är ett tal!" << endl;

hemligt_tal = rand() % 10;

gissat = 11;
cin >> gissat;



int räknare = 1;

while (gissat != hemligt_tal) {
cout << "Fel, gissa igen! Nu kan talet vara upp till " << (10 + räknare) << endl;
cin >> gissat;
räknare++;
hemligt_tal = rand() % (10 + räknare);
}
cout << "Rätt svar! Du klarade det på bara " << räknare << " försök!" << endl;
system("pause");


cout << "\n";
}
}
*/
//Prov 1 Uppgift 1
/*
int main() {

setlocale(LC_ALL, "");

const string NAMN = "Lucas";
string svar;

while (true) {

svar = "";

cout << "Gissa mitt namn: ";
cin >> svar;

if (svar == NAMN) {
cout << "Grattis! Du gissade rätt!" << endl;
break;
}
else {
cout << "Fel namn, försök igen!" << endl;
}

cout << "\n";
}
system("pause");
}
*/
//Prov 1 Uppgift 2
/*int main() {

setlocale(LC_ALL, "");

//const double BETYG_SIFFROR[] = { 1.2, 3.4, 5.6, 7.8, 9.10, 11.12 };
const char BETYG[] = { 'F', 'E', 'D', 'C', 'B', 'A' };

int svar[5];

double total;

while (true) {

cout << "Alla poäng ska skrivas som ett heltal från 1 till och med 12!" << endl << endl;

for (int i = 0; i < 5; i++) {
cout << "Skriv in poäng nr " << i + 1 << ": ";
cin >> svar[i];
}

cout << '\n';

total = 0;
for (int i = 0; i < 5; i++) {
total += svar[i];
int m = 0;
while (svar[i] > (m + 1) * 2) {
m++;
}
cout << "Poäng " << svar[i] << " ger betyg " << BETYG[m] << endl;
}
cout << '\n';

cout << "Medelvärde: " << total / 5 << endl;
cout << "\n";
cout << "------------------------\n" << endl;
}
return 0;
}
*/
//Övning 8.5
/*
int main() {

setlocale(LC_ALL, "");

double tal[8];

double störst = 0;

while (true) {

cout << "Skriv in tal: " << endl;

for (int i = 0; i < 8; i++) {
cout << (i + 1) << ": ";
cin >> tal[i];

if (tal[i] > störst) {
störst = tal[i];
}
}

cout << endl << "Det största talet är " << störst << endl;


cout << "\n";
cout << "------------------------\n" << endl;
system("pause");
}
system("pause");
return 0;
}
*/
//Miniräknare
/*
int main() {

setlocale(LC_ALL, "");

double tal1;
double tal2;
char räknesätt;

char in = 'j';

do {
cout << "Mata in..." << endl;
cout << "tal1: "; cin >> tal1;
cout << "räknesätt: "; cin >> räknesätt;
cout << "tal2: "; cin >> tal2;
cout << "\n";

cout << "Svar: ";
if (räknesätt == '+') {
cout << tal1 + tal1;
}
else if (räknesätt == '-') {
cout << tal1 - tal2;
}
else if (räknesätt == '*') {
cout << tal1 * tal2;
}
else if (räknesätt == '/') {
cout << tal1 / tal2;
}
else {
cout << "Ogiltigt tecken";
}
cout << "\n" << endl;

cout << "Fortsätt? (j/n) "; cin >> in;
} while (in == 'j');


cout << "\n";
cout << "------------------------\n" << endl;
system("pause");
return 0;
}
*/
//Banken
/*
int main() {

setlocale(LC_ALL, "");

int behallning = 0;
int val;
int fortsatt = true;

cout << "Välkommen till banken!\n\n------------------------------";
do{
cout << "\n\nVad vill du göra? \n1.Insättning \n2.Uttag \n3.Kontobehållning \n4.Avsluta \n" << endl;
cout << "Val: ";
cin >> val;
switch (val) {
case 1:
int insattning;
cout << "Insättning i kronor: ";
cin >> insattning;
behallning += insattning;
break;
case 2:
int uttag;
cout << "Uttag i kronor: ";
cin >> uttag;
if (behallning - uttag < 0){
cout << "Otillräcklig behållning, " << behallning << "kr uttaget.";
behallning = 0;
}
else {
behallning -= uttag;
}
break;
case 3:
cout << "Kontobehållning: " << behallning << endl;
break;
case 4:
fortsatt = false;
break;
default:
cout << "Ogiltig inmatning!" << endl;
}
cout << "\nSkriv f för att fortsätta..." << endl;
if (fortsatt) {
char paus;
cin >> paus;
}
} while (fortsatt);

system("pause");
return 0;
}
*/

//string baklanges(string& strang, double output = false) {
//
//}

int main() {

	setlocale(LC_ALL, "");
	double tid[100];
	int antal;
	doublesInput(tid, antal);
	cout << lowestDouble(tid, antal) << endl;
	

	system("pause");
	return 0;
}

/*
//
int main() {

setlocale(LC_ALL, "");



system("pause");
return 0;
}
*/
/*
//
int main() {

setlocale(LC_ALL, "");



while(true){



cout << "\n";
cout << "------------------------\n" << endl;
system("pause");
}
return 0;
}
*/
