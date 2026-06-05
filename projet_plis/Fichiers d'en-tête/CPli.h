#pragma once
#include "CEnsembleCartes.h"
#include "CJoueur.h"
#include <vector>
#include <map>

class CPli {
	//ATTRIBUTS
private :
	map<CJoueur,CCarte> map_j_c;


public:
	//CONSTRUCTEURS DESTRUCTEUR
	void CPli(vector<CJoueur> vJoueur);

	//METHODES
	
	//Ajouter des carte par joueur
	void ajouterCartes(CJoueur& Joueur, CCarte & Carte);

	// vider completement le pli actuel en gardant les joueurs
	void vider();

	//donner cartes au vainqueur
	void DonnerCartesVainqueur(CJoueur & Joueur);
};