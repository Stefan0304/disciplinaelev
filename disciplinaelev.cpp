// disciplinaelev.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "elev.h"
using namespace std;

int main()
{
	int nr_elevi = 0;
	int i, j;
	elev e[31];
	cout << "Nr elevi: ";
	cin >> nr_elevi;
	for (i = 1; i <= nr_elevi; i++)
		for (i = 1; i <= nr_e[i].nr_discipline; j++)
			if (e[i].dis[j].Getmedia >= 5) {
				e[i].dis[j].Afisare();
				e[i].dis[j].Adaug_nota();
				e[i].dis[j].Afisare();
				return 0;
			}