#pragma once
#include "CDeck.h"
#include "CEnsembleCartes.h"
#include <iostream>
#include <vector>

class CMainJoueur : public CEnsembleCartes {
public:
	//METHODES
	/*retirer(CCarte* carte);
	*
	*/

	void retirer(CCarte* carte);
	vector<CCarte*> getCartes();
};