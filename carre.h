#pragma once


/// @breif Classe representant un carre
class CCarre
{
private:
	/// @brief coordonnee en x
	int sx;
	/// @brief coordonnee en y
	int sy;
	/// @brief coté
	unsigned int cote;

public:
	/// @param sx1 coordonnee en x
	void Setsx(int sx1);
	/// @param sy1 coordonnee en y
	void Setsy(int sy1);
	/// @param cote1 coté
	void Setcote(unsigned int cote1);
	/// @brief coordonnee en x
	int Getsx();
	/// @brief coordonnee en y
	int Getsy();
	/// @brief coté
	unsigned int Getcote();
	void Afficher();
};