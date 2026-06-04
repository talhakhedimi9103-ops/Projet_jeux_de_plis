#pragma once
#include <vector>
#include "CCarte.h"

class CEnsembleCartes {
	//ATTRIBUTS
protected :
	vector<CCarte> vCartes;

	//METHODES

	//Ajouter une carte 
	void Ajouter(CCarte& Carte) {vCartes.push_back(Carte);}

};