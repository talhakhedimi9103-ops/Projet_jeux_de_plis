#ifndef REGLES_MOTEUR_HPP
#define REGLES_MOTEUR_HPP

#include <vector>
#include <memory>

// Déclarations anticipées (Forward declarations) pour éviter les inclusions cycliques
class Deck;
class Joueur;
class Carte;
class Main;
class Pli;

class ReglesMoteur {
public:
    virtual ~ReglesMoteur() = default;

    // Distribue les cartes du paquet aux différents joueurs
    virtual void distribuerCartes(Deck& paquet, std::vector<std::shared_ptr<Joueur>>& joueurs) = 0;

    // Vérifie si la carte choisie respecte les règles de pose actuelles
    virtual bool validerCoup(const std::shared_ptr<Carte>& carte, const Main& main, const Pli& pliActuel) const = 0;

    // Détermine quel joueur remporte le pli en cours
    virtual std::shared_ptr<Joueur> determinerGagnantPli(const Pli& pli) const = 0;

    // Compte le nombre de points cumulés dans un pli spécifique
    virtual int compterPointsPli(const Pli& pli) const = 0;
};

#endif // REGLES_MOTEUR_HPP
