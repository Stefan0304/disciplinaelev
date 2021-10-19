#include "elev.h"
#include "disciplina.h"
#include <iostream>

using namespace std;

void C_elev::Media(){
	double d_suma = 0;
	for (int i_i= 1; i_i<= i_nr_discipline; i_i++)
		d_suma += C_dis[i_i].Getmedia();
	d_media = d_suma / i_nr_discipline;
}

void C_elev::citire()
{
	cout << " Numele elevului : ";
	cin.get(nume, 40);
	cout << " Prenumele elevului este : ";
	cin.get();
	cin.get(prenume, 40);
	cout << " Numarul de discipline : ";
	cin >> i_nr_discipline;
	cin.get();
	for (int i = 1; i <= i_nr_discipline; i++)
	{
		C_dis[i].citire();
		Media();
	}
}

void C_elev::afisare() {

	cout << nume << " " << prenume << "are notele : \n";
	for (int i_i = 1; i_i<= i_nr_discipline; i_i++)
		C_dis[i_i].afisare();
}