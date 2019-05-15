
#include <iostream>
#include "fahrzeug.h"

using namespace std;


// Methode zum Abfragen des Tankfuellstandes
double Fahrzeug::holeTankfuellstand()
{
	return tankfuellstand;
}


// Methode zum Abfragen des Benzinverbrauches
double Fahrzeug::holeBenzinVerbrauch()
{
	return benzinVerbrauch;
}


// Methode zum Setzen des Tankfuellstandes
void Fahrzeug::setzeTankfuellstand(double neuerFuellstand)
{
	tankfuellstand = neuerFuellstand;
}


// Methode zum Setzen des Benzinverbrauches
void Fahrzeug::setzeBenzinVerbrauch(double neuerVerbrauch)
{
	benzinVerbrauch = neuerVerbrauch;
}


// Methode, die das Tanken simulieren soll
void Fahrzeug::tanken(double literAnzahl)
{
	tankfuellstand += literAnzahl;	// tankfuellstand = tankfuellstand + literAnzahl;
	

	// Maximalliter des Tanks sind jetzt hier als 80.0 Liter festgelegt
	if (tankfuellstand > 80.0)
	{
		cout << "Der Tank laeuft ueber, du Idiot!!! LOL" << endl;
		tankfuellstand = 80.0;
	}

}


// Methode, um das Fahren zu simulieren
void Fahrzeug::fahren(double strecke)
{
	double voraussichtlicherVerbrauch = (strecke * (benzinVerbrauch / 100)); // [l = km * (l / km)]

	if (voraussichtlicherVerbrauch <= tankfuellstand)
	{
		cout << "Sie sind " << strecke << " gefahren" << endl;

		// Tankfuellstand aktualisieren
		tankfuellstand -= voraussichtlicherVerbrauch;	// tankfuellstand = tankfuellstand - voraussichtlicherVerbrauch;
	}
	else
	{
		cout << "Sie haben nicht genug Benzin" << endl;
	}
}