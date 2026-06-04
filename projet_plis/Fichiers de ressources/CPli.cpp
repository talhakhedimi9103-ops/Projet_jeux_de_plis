#include "CPli.h"

void CPli::ajouterCartes(CJoueur& Joueur, CEnsembleCartes& Cartes)
{
	paire_joueur_cartes.push_back(Joueur, Cartes);
}

void CPli::vider()
{
	paire_joueur_cartes.clear();
}

void CPli::DonnerCartesVainqueur(CJoueur & Joueur)
{
	CMainJoueur MainaDonner;
	for (int i = 0, i < paire_joueur_cartes.size(); i + ) {
		for (int j = 0; j < paire_joueur_cartes[i].second.size();j++) {
			MainaDonner.Ajouter(paire_joueur_cartes[i].second[j]);
		}
	}
	Joueur.AjouterCartes(MainaDonner);
}

