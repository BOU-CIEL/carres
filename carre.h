#pragma once


/// @breif Classe representant un carre
class CCarre
{
private:
	/// @brief coordonnee en x
	int sx;
	/// @brief coordonnee en y
	int sy;
	/// @brief cot�
	unsigned int cote;

public:
	/// @brief coordonnee en x
	void Setsx(int sx1);
	/// @brief coordonnee en y
	void Setsy(int sy1);
	/// @brief cot�
	void Setcote(unsigned int cote1);

};