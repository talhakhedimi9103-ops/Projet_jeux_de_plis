#pragma once
#include <iostream>
#include <string>
#include "CCarte.h"
using namespace std;

class CJoueur {
private:
	string nomJoueur;
	CMain mainJoueur;
	int score;
	StrategieJoueur strategie;
public:
	CCarte jouerCarte(Pli& pliActuel);
	void ajouterPoints(int pts);
};