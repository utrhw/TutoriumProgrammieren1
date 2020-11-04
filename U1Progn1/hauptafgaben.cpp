/* Uebung 1: Geodaetische Hauptaufgaben
Ersteller: Moritz Aberle
Datum: 28.10.2020
Das Programm liesst kartesische Koordinaten interaktiv über die Konsole ein und wandelt sie in Polarkoordinaten um.
Anschließend werden die Polarkoordinaten tabellarisch auf der Konsole ausgegeben.*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double easting;
	double northing;
	double phi;
	double r;
	const double PI = M_PI;
	const double RHO = 200 / PI;

	// Einlesen
	cout << "Bitte kartesische Koordinaten eingeben:\nRechts:";
	cin >> easting;
	cout << "Hoch:";
	cin >> northing;

	//Berechnung
	phi = atan2(easting, northing);
	if (phi < 0) phi += 2 * PI;
	phi *= RHO;

	r = sqrt(easting * easting + northing * northing);
	cout <<fixed << setprecision(4);
	cout << "t(gon)\ts(m)\n" << phi << "\t" << r << endl;

	
	return 0;
}