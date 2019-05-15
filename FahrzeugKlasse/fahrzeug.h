
#pragma once

// Headerdatei - Schittstellendatei (Interfacedatei)
// Beschreibt die Klasse (Eigenschaften / Fähigkeiten)

class Fahrzeug
{
	// Deklaration der Attribute der Klasse Fahrzeug

private:

	double tankfuellstand = 0-0;		// Menge Benzin im Tank in Litern
	double benzinVerbrauch = 0.0;		// Liter pro 100 km 


	// Deklaration der Methoden der Klasse Fahrzeug
public:


	// Getter und Setter

	double holeTankfuellstand();
	double holeBenzinVerbrauch();

	void setzeTankfuellstand(double);
	void setzebenzinVerbrauch(double);

	void beschleunigen();	// Geschwindigkeit erhoehen
	void bremsen();			// Geschwindigkeit verringern


};

