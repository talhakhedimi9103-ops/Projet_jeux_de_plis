#pragma once
#include "CDeck.h"

class CMainJoueur : public CDeck {
public:
	void retirer(CCarte* carte);
	vector<CCarte*> getCartes();
};