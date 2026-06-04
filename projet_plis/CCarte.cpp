#include "CCarte.h"

CCarte::~CCarte()
{
}

CCarte::CCarte(int valeur, string couleur)
{
	iValeur = valeur;
	Couleur = couleur;
}

int CCarte::getValeur()
{
	return iValeur;
}

string CCarte::getCouleur()
{
	return Couleur;
}

void CCarte::setValeur(int valeur)
{
	iValeur = valeur;
}

void CCarte::setCouleur(string couleur)
{
	Couleur = couleur;
}