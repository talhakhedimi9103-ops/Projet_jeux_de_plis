#include "CIA.h"

CCarte* CIA::choisirCarte(MainJoueur& Main, CPli& Pli, CReglesMoteur & Regles)
{
	CCarte carteChoisie;
	while (validerCoup() != true) {
		int nombre = rand() % Main.getNbCartes;
		if (validerCoup)
	}
}
