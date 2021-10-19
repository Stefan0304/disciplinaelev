#pragma once
#include "disciplina.h"
class C_elev
{
	char nume[50];
	char prenume[40];
	Cdisciplina C_dis[20];
	int i_nr_discipline = 3;
	double d_media;
	void Media();
public:
	void citire();
	void afisare();
	void afisarecorigente();
};

