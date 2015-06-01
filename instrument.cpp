#include "instrument.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;


Instrument::Instrument()
{

	dlugosc=0;
	szerokosc=0;
	cena=0;
}

int Instrument::get_dlugosc()

{

	return dlugosc;

}

int Instrument::get_szerokosc()

{

	return szerokosc;

}

double Instrument::get_cena()

{

	return cena;

}



void Instrument::set_dlugosc(int dlugosc)

{


	this->dlugosc=dlugosc;



}

void Instrument::set_szerokosc(int szerokosc)

{

	this->szerokosc=szerokosc;

}


void Instrument::set_cena(double cena)

{

	this->cena=cena;


}



void Instrument::dodaj()

{

	cout << "Szerokosc[cm]: " << endl;
	cin >> szerokosc; cout << endl;

	cout << "Dlugosc[cm]: " << endl;
	cin >> dlugosc; cout << endl;

	cout << "Cena[zl]: " << endl;
	cin >> cena; cout << endl;


}

void Instrument::wyswietl()

{

	cout << "Szerokosc to: " << endl;
	cout << szerokosc <<"cm" <<endl;
	cout << "Dlugosc to: " << endl;
	cout<< dlugosc <<"cm"  << endl;
	cout << "Cena to: " << endl;
	cout << cena <<"zl"  << endl;

}


