#pragma once
#include "CMainJoueur.h"
#include "CCarte.h"
#include "CPli.h"
#include "CReglesMoteur.h"

class CStrategieJoueur {
public :
	//METHODES

	virtual CCarte* choisirCarte(MainJoueur& Main, CPli& Pli, CReglesMoteur Regles)=0;
};