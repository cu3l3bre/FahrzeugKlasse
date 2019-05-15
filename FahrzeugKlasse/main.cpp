
#include <iostream>
#include "fahrzeug.h"

using namespace std;


int main()
{
	cout << "Programm zu Fahrzeugklasse" << endl << endl;

	// Anlegen eines Objektes der Klasse Fahrzeug
	Fahrzeug Opel;

	Opel.setzeTankfuellstand(4.4);
	Opel.setzebenzinVerbrauch(6.6);


	cout << "Aktueller Tankfuellstand:\t" << Opel.holeTankfuellstand() << endl;
	cout << "Benzinverbauch des Fahrzeugs:\t" << Opel.holeBenzinVerbrauch() << endl;


	system("pause");
	return 0;
}