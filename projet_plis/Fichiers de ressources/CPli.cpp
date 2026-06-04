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
	Joueur.
}

