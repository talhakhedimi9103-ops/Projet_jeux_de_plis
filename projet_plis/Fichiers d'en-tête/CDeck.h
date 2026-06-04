#pragma once
#include <vector>
#include <algorithm>
#include <random>
#include "CEnsembleCartes.h"

using namespace std;

class CDeck :public CEnsembleCartes {

	//CONSTRUCTEURS DESTRUCTEURS
public:


	//METHODES

	//Ménalnge les cartes de façon aléatoire
	void Melanger();

	//Tire une carte aléatoire dans le deck
	CCarte* Tirer();

	//Distribuer une carte au hasard
	vector<CCarte> Distribuer(int NombreCartes);


};