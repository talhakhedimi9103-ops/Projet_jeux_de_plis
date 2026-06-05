#pragma once
#include "CJoueur.h"
#include <map>
using namespace std;

class CScoreManager {
	private:
		map<CJoueur, int> score;
	public:
		int GetScore(CJoueur& joueur);
		void addScore(CJoueur& joueur, int score);
};
};