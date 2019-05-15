
#include <iostream>
#include "fahrzeug.h"

using namespace std;


int main()
{
	cout << "Programm zu Fahrzeugklasse" << endl << endl;

	// Anlegen eines Objektes der Klasse Fahrzeug
	Fahrzeug opel;

	opel.setzeTankfuellstand(80);
	opel.setzeBenzinVerbrauch(5.0);


	cout << "Aktueller Tankfuellstand:\t" << opel.holeTankfuellstand() << endl;
	cout << "Benzinverbauch des Fahrzeugs:\t" << opel.holeBenzinVerbrauch() << endl;


	opel.fahren(400);

	cout << opel.holeTankfuellstand() << endl;

	opel.tanken(10.0);
	cout << opel.holeTankfuellstand() << endl;

	opel.fahren(100.0);
	cout << opel.holeTankfuellstand() << endl;

	system("pause");
	return 0;
}