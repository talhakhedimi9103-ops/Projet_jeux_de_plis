#pragma once
#include <iostream>
#include <string>
#include "CCarte.h"
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
	CCarte jouerCarte(CEnsembleCartes & pliActuel);
	void ajouterPoints(int pts);
	CEnsembleCartes getMain();
	void AjouterCartes(EnsembleCarte* cartes);
};