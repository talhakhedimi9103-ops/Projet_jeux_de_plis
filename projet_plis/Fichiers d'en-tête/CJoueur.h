#pragma once
#include <iostream>
#include <string>
#include "CCarte.h"
#include "CMainJouer.h"
#include "CEnsembleCartes.h"
using namespace std;

class CJoueur {
private:
	string nomJoueur;
	CMain mainJoueur;
	int score;
	StrategieJoueur strategie;
public:
	CCarte jouerCarte(CEnsembleCartes & pliActuel);
	void ajouterPoints(int pts);
	CEnsembleCartes getMain();
	void AjouterCartes(CEnsembleCartes& Cartes);
};