//Date de cr�ation= 03/12/2024
//Nom de l'�l�ve= Adel BOUHAFS
//Nom et r�sum� du Tp= TP_carr�s_anim�s

#include <iostream>
#include <stdio.h>
#include "carre.h"

using namespace std;

void CCarre::Setsx(int sx1)
{
	this->sx = sx1;

}


void CCarre::Setsy(int sy1)
{
	this->sy = sy1;

}


void CCarre::Setcote(unsigned int cote1)
{
	this->cote = cote1;
}


int CCarre::Getsx()
{
	return this->sx;
}


int CCarre::Getsy()
{
	return this->sy;
}


unsigned int CCarre::Getcote()
{
	return this->cote;
}


void CCarre::Afficher()
{
	cout << "sx: " << this->sx << endl << "sy: " << this->sy << endl << "cote: " << this->cote << endl;
}

void CCarre::Deplacer(char direction, int saut)
{
	switch (direction)
	{
	case'n':
		this->sy -= saut;
		break;

	case's':
		this->sy += saut;
		break;

	case'o':
		this->sx -= saut;
		break;

	case'e':
		this->sx += saut;
		break;
	}
}


void CCarre::Deplacer(int dx, int dy)
{
	this->sx += dx;
	this->sy += dy;
}
