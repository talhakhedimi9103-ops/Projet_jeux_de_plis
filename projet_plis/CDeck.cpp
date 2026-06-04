#include "CDeck.h"

void CDeck::Melanger()
{
	random_device rd;
	mt19937 g(rd);
	shuffle(vCartes.begin(), vCartes.end(), g());
}

CCarte* CDeck::Tirer()
{
	int valeur_random = rand() % vCartes.size();
	vCartes.erase(vCartes.begin(), vCartes.begin() + valeur_random);
	return &vCartes[valeur_random];
}

vector<CCarte> CDeck::Distribuer(int NombreCartes)
{
	vector<CCarte> vCarteDistribue;
	for (int i = 0; i < NombreCartes; i++) {
		vCarteDistribue.push_back(*Tirer());
	}
	return vCarteDistribue;
}