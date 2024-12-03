//Date de création= 03/12/2024
//Nom de l'élève= Adel BOUHAFS
//Nom et résumé du Tp= TP_carrés_animés

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
	cout <<"sx: " << this->sx << "sy: " << this->sy << "cote: " << this->cote
}
