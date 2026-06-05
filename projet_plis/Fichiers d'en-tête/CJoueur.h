#pragma once
#include <iostream>
#include <string>
#include "CCarte.h"
#include "CMainJouer.h"
#include "CEnsembleCartes.h"
#include "CMainJoueur.h"
using namespace std;

class CJoueur {
private:
	string nomJoueur;
	CMainJoueur mainJoueur;
	int score;
	StrategieJoueur strategie;
public:
	CCarte jouerCarte(CPli & pliActuel);
	void ajouterPoints(int pts);
	CEnsembleCartes getMain();
	void Ajouter(CEnsembleCartes & Cartes)
};