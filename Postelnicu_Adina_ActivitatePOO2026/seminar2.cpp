#include <iostream>

using namespace std;

struct Cladire
{
	char* culoare;
	float inaltime;
	int nrEtaje;
	bool deschis;
};

Cladire cirireCladire()
{
	Cladire c;
	char x[100];
	cout << "Culoare: ";
	cin >> x;
	c.culoare = new char[strlen(x) + 1];
	strcpy_s(c.culoare, strlen(x) + 1, x);

	cout << "\nInaltime: ";
	cin >> c.inaltime;
	cout << "\nNumar etaje: ";
	cin >> c.nrEtaje;
	cout << "\nEste deschisa (1/0): ";
	cin >> c.deschis;

	return c;
}

void afisareCladire(Cladire c)
{
	cout << "Culoarea cladirii este: " << c.culoare << endl;
	cout << "Inaltimea cladirii este: " << c.inaltime << endl;
	cout << "Numar etaje: " << c.nrEtaje << endl;
	cout << "Este deschisa: " << c.deschis << endl;
}

void main()
{
	Cladire c = cirireCladire();
	afisareCladire(c);
	// char* vectorC;
	// vectorC = new char[strlen("POO") + 1];
	// strcpy_s(vectorC, strlen("POO") + 1, "POO");
	// int nrCladiri = 5;
	// Cladire* cladiri;
	// cladiri = new Cladire[nrCladiri];
	// cladiri = (Cladire*)malloc(nrCladiri * sizeof(Cladire));
}