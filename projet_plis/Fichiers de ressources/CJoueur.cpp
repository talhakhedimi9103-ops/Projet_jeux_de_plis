#include "CJoueur.h"

CCarte CJoueur::jouerCarte(CPli& pliActuel)
{
	if (JoueurReel == true) {
		CCarte* carte = HumainConsole::choisirCartes(mainJoueur, pliActuel, regles);
		mainJoueur.retirer(carte);
	}
	return carte;
	
}

void CJoueur::ajouterPoints(int pts)
{
	score += pts;
}

CMainJoueur CJoueur::getMain()
{
	return mainJoueur;
}

void CJoueur::Ajouter(CEnsembleCartes& Carte)
{
	mainJoueur.AjouterCartes(Carte);

}

int CJoueur::GetScore(CJoueur& joueur)
{
	return score;
}

