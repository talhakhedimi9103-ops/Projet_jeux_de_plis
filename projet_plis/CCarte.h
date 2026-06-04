#pragma once
#include <iostream>
using namespace::std;

class CCarte {
private:
	int iValeur;
	string Couleur;
public:
	//Constucteurs
	~CCarte();
	CCarte(int valeur, string couleur);
	//Méthodes
	int getValeur();
	string getCouleur();
	void setValeur(int valeur);
	void setCouleur(string couleur);
	cout << "test" << endl;
};
