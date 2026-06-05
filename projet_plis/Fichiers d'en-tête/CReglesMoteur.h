#ifndef REGLES_MOTEUR_HPP
#define REGLES_MOTEUR_HPP

#include <vector>
#include <memory>
using namespace std;

class CReglesMoteur {
public:
    virtual ~ReglesMoteur() = default;

    // Distribue les cartes du paquet aux différents joueurs
    virtual void distribuerCartes(CDeck& paquet, vector<shared_ptr<CJoueur>>& joueurs) = 0;

    // Vérifie si la carte choisie respecte les règles de pose actuelles
    virtual bool validerCoup(const shared_ptr<CCarte>& carte, const CMainJoueur& main, const CPli& pliActuel) const = 0;

    // Détermine quel joueur remporte le pli en cours
    virtual shared_ptr<CJoueur> determinerGagnantPli(const CPli& pli) const = 0;

    // Compte le nombre de points cumulés dans un pli spécifique
    virtual int compterPointsPli(const CPli& pli) const = 0;
};

#endif // REGLES_MOTEUR_HPP
