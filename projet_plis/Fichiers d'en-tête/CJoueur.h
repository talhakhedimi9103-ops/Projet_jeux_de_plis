#pragma once
#include <iostream>
#include <string>
#include "CCarte.h"
#include "CMainJouer.h"
#include "CEnsembleCartes.h"
#include "CMainJoueur.h"
#include "CReglesMoteur.h"
#include "CStrategieJoueur.h"

using namespace std;

class CJoueur {
private:
	string nomJoueur;
	CMainJoueur mainJoueur;
	int score;
	CReglesMoteur regle;
	bool JoueurReel;

public:
	CCarte jouerCarte(CEnsembleCartes& pliActuel);
	void ajouterScore(int score);
	CMainJoueur getMain();
	void Ajouter(CEnsembleCartes& Cartes);
	void getScore();
};