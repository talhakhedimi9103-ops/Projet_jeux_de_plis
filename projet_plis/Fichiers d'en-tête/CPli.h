#pragma once
#include "CEnsembleCartes.h"
#include <vector>

class CPli {
	//ATTRIBUTS
private :
	vector<pair<CJoueur, CEnsembleCartes>> paire_joueur_cartes;

//METHODES
public:
	//Ajouter des carte par joueur
	void ajouterCartes(CJoueur& Joueur, CEnsembleCartes & Cartes);

	// vider completement le pli actuel
	void vider();

	//donner cartes au vainqueur
	CEnsembleCartes vainqueur();
};