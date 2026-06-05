#pragma once
#include "CStrategieJoueur.h"

class CIA : public CStrategieJoueur {
	CCarte* choisirCarte(MainJoueur& Main, CPli& Pli, CReglesMoteur Regles);
};