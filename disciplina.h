#pragma once
#include <iostream>
using namespace std;

class Cdisciplina
{
	char c_nume[50];
	int i_nr_note = 0, i_teza = 0;
	double d_media;
	int i_note[10];
	void Media();
public:
	void citire();
	void adaugare_nota();
	void afisare();
	double Getmedia() { return d_media; };
	
};

