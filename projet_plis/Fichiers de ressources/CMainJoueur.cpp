#include "CMainJoueur.h"

void CMainJoueur::retirer(CCarte* carte)
{
	int cpt = 0;
	while (vCartes[cpt] != cartes && vCartes.size() <= cpt) {
		cpt += 1;
	}
	if (vCartes[cpt] == cartes) {
		vCartes.erase(vCartes.begin() + cpt);	
	}
	else {
		cout << "Vous ne pouvez pas retirer cette carte" << endl; //class CEXCEPTION
	}
}

vector<CCarte*> CMainJoueur::getCartes()
{
	return vCartes;
}
