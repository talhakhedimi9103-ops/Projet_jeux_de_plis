#include "CPli.h"

CPli::CPli(vector<CJoueur> vJoueur)
{
	for (int i = 0; i < vJoueur.size(); i++) {
		map_j_c.insert({ vJoueur[i],CCarte{} });
	}
	
}

void CPli::ajouterCartes(CJoueur& Joueur, CCarte& Carte)
{
	map_j_c.insert({ Joueur, Carte });
}

void CPli::vider()
{
	map<CJoueur, CCarte>::iterator iterateur = map_j_c.begin();
	for (iterateur; iterateur != map_j_c.end(); iterateur++) {
		iterateur->second = CCarte();
	}
}

void CPli::DonnerCartesVainqueur(CJoueur & Joueur)
{
	CMainJoueur MainaDonner;
	map<CJoueur, CCarte>::iterator iterateur = map_j_c.begin();
	for (iterateur; iterateur != map_j_c.end(); iterateur++) {
		MainaDonner.AjouterCarte(iterateur->second);
	}
	Joueur.AjouterCartes(MainaDonner);
	vider();
}

