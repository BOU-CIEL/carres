//Date de cr�ation= 03/12/2024
//Nom de l'�l�ve= Adel BOUHAFS
//Nom et r�sum� du Tp= TP_carr�s_anim�s

#include <iostream>
#include <stdio.h>
#include "carre.h"

using namespace std;

int main()
{
	CCarre c1;
	c1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	c1.Deplacer('n', 3);
	c1.Afficher();
	c1.Deplacer(5, 3);
	c1.Afficher();
	CCarre tab[4];
	for (int i = 0; i < 4; i++) {
		tab[i].Setsx(i);
		tab[i].Setsy(i);
		tab[i].Setcote(i);

	}
	tab[2].Afficher();

}

