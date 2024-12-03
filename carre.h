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
	/// @brief coordonnee en x
	void Setsx(int sx1);
	/// @brief coordonnee en y
	void Setsy(int sy1);
	/// @brief coté
	void Setcote(unsigned int cote1);

};