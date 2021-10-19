#include "disciplina.h"

void Cdisciplina::Media()
{
	int i_i;
	double d_suma = 0;
	for (i_i = 1; i_i <= i_nr_note; i_i++)
		d_suma += i_note[i_i];
	d_media = d_suma / i_nr_note;
	if (i_teza > 0)
		d_media = (d_media * 3 + i_teza) / 4;
}

void Cdisciplina::citire()
{
	cout << " Denumirea disciplinei este : ";
	cin.get();
	cin.get(c_nume, 50);
	cout << " Numarul de note : ";
	cin >> i_nr_note;
	for (int i_i = 1; i_i <= i_nr_note; i_i++)
	{
		cout << " Nota : ";
		cin >> i_note[i_i];
	}
	Media();
}

void Cdisciplina::adaugare_nota()
{
	cout << " Nota : ";
	i_nr_note++;
	cin >> i_note[i_nr_note];

}

void Cdisciplina::afisare()
{
	cout << " Numele disciplinei este : " << endl;
	if (i_nr_note > 0)
		for (int i_i = 1; i_i <= i_nr_note; i_i++)
			cout << i_note[i_i] << ' ';
	cout << "\n  Media: " << d_media;
}
