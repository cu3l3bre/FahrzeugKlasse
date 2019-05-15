

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
void Fahrzeug::setzebenzinVerbrauch(double neuerVerbrauch)
{
	benzinVerbrauch = neuerVerbrauch;
}





void Fahrzeug::beschleunigen()
{

	;
}


void Fahrzeug::bremsen()
{

	;
}







