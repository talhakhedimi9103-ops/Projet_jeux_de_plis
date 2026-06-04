#pragma once
#include <iostream>
#include <string>
using namespace std;

class CJoueur {
private:
	string nomJoueur;
	CMain mainJoueur;
	int score;
	StrategieJoueur strategie;
public:
	Carte jouerCarte(Pli& pliActuel);
	void ajouterPoints(int pts);
};