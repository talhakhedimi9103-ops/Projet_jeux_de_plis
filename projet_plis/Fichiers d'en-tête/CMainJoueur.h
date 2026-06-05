#pragma once
#include "CDeck.h"
#include "CEnsembleCartes.h"
#include <iostream>
#include <vector>

class CMainJoueur : public CEnsembleCartes {
public:
	//METHODES
	/*void retirer(CCarte* carte);
	*
	*Entree : carte de type CCarte* 
	*Necessite : rien 
	*Sortie : rien
	*Objectif : retirer une carte de la main du joueur
	*/
	void retirer(CCarte* carte);
	/*vector<CCarte*> getCartes();
	*
	*Entree : rien
	*Necessite : rien
	*Sortie : vector de CCarte*
	*Objectif : retourner les cartes de la main du joueur
	*/
	vector<CCarte*> getCartes();

	void AjouterCartes(CCartes& Carte);

	int getNbCartes(); { return vCartes.size(); }
};