#pragma once
#include "instrument.h"
#include <string>

using namespace std;


class Gitara : public Instrument

{

private:

int rok_powstania;
string nazwa, producent;

public:

int nr;

Gitara();
void wyswietl_g();
void dodaj_g();
void Menu();

int get_rok_powstania();
void set_rok_powstania(int rok_powstania);

string get_nazwa();
void set_nazwa(string nazwa);

string get_producent();
void set_producent(string producent);
};

