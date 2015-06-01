#pragma once

using namespace std;
 
class Instrument

{

private:

int dlugosc,szerokosc;
double cena;

public:

Instrument();

int get_dlugosc();
void set_dlugosc(int dlugosc);

int get_szerokosc();
void set_szerokosc(int szerokosc);

double get_cena();
void set_cena(double cena);


void wyswietl();
void dodaj();

};
