
#pragma once
#include <iostream>
using namespace std;

// Headerdatei - Schittstellendatei (Interfacedatei)
// Beschreibt die Klasse (Eigenschaften / Fähigkeiten)

class Fahrzeug
{
	// Deklaration der Attribute der Klasse Fahrzeug

private:

	double tankfuellstand;		// Menge Benzin im Tank in Litern
	double benzinVerbrauch;		// Liter pro 100 km 


	// Deklaration der Methoden der Klasse Fahrzeug
public:


	// Getter Methoden
	double holeTankfuellstand();
	double holeBenzinVerbrauch();

	// Setter Methoden
	void setzeTankfuellstand(double);
	void setzeBenzinVerbrauch(double);

	// Methoden
	void tanken(double);
	void fahren(double);


	// Stanard-Konstruktor - spezielle Methode
	// die automatsich aufgerufen wird 
	// wenn ein Objekt erstellt / erzeugt wird
	// wenn wir keinen Konstruktor schreiben, dann macht
	// das System das fuer un
	// dann waere diese quasi ohne Inhalt
	// standard erkennt man daran, dass die () leer bleiben
	Fahrzeug()
	{
		cout << "Konstruktor wurde aufgerufen" << endl;
		tankfuellstand = 0.0; // Startwert
		benzinVerbrauch = 10.0; // Startwert (sinnvoll ?????)
	}

	// allgemeiner Konstruktor
	// () sind NICHT leer
	Fahrzeug(double neuerTankfuellstand, double neuerVerbrauch)
	{
		cout << "Allgemeiner Konstruktor" << endl;
		tankfuellstand = neuerTankfuellstand;
		benzinVerbrauch = neuerVerbrauch;
	}

};

