#include "instrument.h"
#include "gitara.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

Gitara::Gitara():Instrument()
{

	nazwa="brak";
	producent="brak";
	rok_powstania=0;


}

void Gitara::wyswietl_g()

{
	cout << "Nazwa to: " << endl;
	cout << nazwa << endl;
	cout << "Producent to: " << endl;
	cout << producent << endl;
	cout << "Rok powstania to: " << endl;
	cout << rok_powstania << endl;

}

void Gitara::dodaj_g()
{

	cout << "Podaj nazwe: " << endl;
	cin >> nazwa; cout << endl;

	cout << "Podaj producenta: " << endl;
	cin >> producent; cout << endl;

	cout << "Podaj rok powstania: " << endl;
	cin >> rok_powstania; cout << endl;


}

void Gitara::Menu()
{

	cout << "WITAM W MAGAZYNIE INSTRUMENTOW\n " << endl;
	cout << "Co chcialbys zrobic ? " << endl;
	cout << "1. Dodaj instrument " << endl;
	cout << "2. Wyswietl instrument " << endl;
	cout << "3. Zakoncz" << endl;

	cout << "Podaj nr czynnosci" << endl;
	cin >> nr;

	if(nr==1)
		{
			Gitara::dodaj();
			Gitara::dodaj_g();
			
		}
	else if(nr==2)
		{
			Gitara::wyswietl();
			Gitara::wyswietl_g();
		
		}
	else if(nr==3)

		exit(0);
	else
	{
		cout << "Podales zly numer. Sprobuj jeszcze raz" << endl;

	}

	getchar(); getchar();

	system("clear");

}

int Gitara::get_rok_powstania()

{

	return rok_powstania;

}

void Gitara::set_rok_powstania(int rok_powstania)

{


	this->rok_powstania=rok_powstania;



}

string Gitara::get_nazwa()

{

	return nazwa;

}

void Gitara::set_nazwa(string nazwa)

{


	this->nazwa=nazwa;



}

string Gitara::get_producent()

{

	return producent;

}

void Gitara::set_producent(string producent)

{


	this->producent=producent;



}
