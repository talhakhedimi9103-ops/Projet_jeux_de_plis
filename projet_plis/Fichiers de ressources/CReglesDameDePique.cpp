#include "CReglesMoteur.h"
#include "CReglesDameDePique.h"

// Exemples d'inclusions de vos autres fichiers de données
/*#include "Deck.hpp"
#include "Joueur.hpp"
#include "Carte.hpp"
#include "Main.hpp"
#include "Pli.hpp"
*/

#include <algorithm>
#include <stdexcept>

// 1. Distribution : À la Dame de Pique, on distribue tout le paquet de 52 cartes équitablement (13 cartes chacun à 4 joueurs)
void ReglesDameDePique::distribuerCartes(Deck& paquet, std::vector<std::shared_ptr<Joueur>>& joueurs) {
    if (joueurs.size() != 4) {
        throw std::invalid_argument("La Dame de Pique se joue obligatoirement à 4 joueurs.");
    }

    paquet.shuffle(); // On mélange le paquet

    size_t joueurActuel = 0;
    while (!paquet.isEmpty()) {
        auto carte = paquet.draw(); // On pioche une carte
        joueurs[joueurActuel]->getMain().ajouter(carte);
        joueurActuel = (joueurActuel + 1) % 4;
    }
}

// 2. Validation du coup : Règles de pose à la Dame de Pique
bool ReglesDameDePique::validerCoup(const std::shared_ptr<Carte>& carte, const Main& main, const Pli& pliActuel) const {
    // Si la main ne contient pas la carte, le coup est invalide
    if (!main.contient(carte)) return false;

    // Si c'est le début du pli, le joueur est libre de jouer ce qu'il veut 
    // (Note : Dans la vraie règle, le premier pli commence par le 2 de Trèfle, à adapter si besoin)
    if (pliActuel.isEmpty()) {
        return true;
    }

    // Si le pli a déjà démarré, on récupère la couleur demandée (la couleur de la première carte jouée)
    Couleur couleurDemandee = pliActuel.getPremiereCarte()->getCouleur();

    // Si le joueur fournit la couleur demandée, le coup est valide
    if (carte->getCouleur() == couleurDemandee) {
        return true;
    }

    // Si le joueur ne fournit pas la couleur demandée, il n'a le droit de le faire 
    // QUE s'il ne possède plus AUCUNE carte de la couleur demandée dans sa main
    bool aDeLaCouleurDemandee = main.aLaCouleur(couleurDemandee);

    return !aDeLaCouleurDemandee;
}

// 3. Déterminer le gagnant du pli
std::shared_ptr<Joueur> ReglesDameDePique::determinerGagnantPli(const Pli& pli) const {
    if (pli.isEmpty()) return nullptr;

    Couleur couleurDemandee = pli.getPremiereCarte()->getCouleur();
    std::shared_ptr<Joueur> gagnant = pli.getJoueurDeLaPremiereCarte();
    int valeurMax = pli.getPremiereCarte()->getValeur();

    // On parcourt toutes les cartes jouées dans le pli
    for (const auto& [joueur, carte] : pli.getCartesJouees()) {
        // À la Dame de Pique, on ne peut remporter le pli que si l'on fournit la couleur demandée
        if (carte->getCouleur() == couleurDemandee) {
            if (carte->getValeur() > valeurMax) {
                valeurMax = carte->getValeur();
                gagnant = joueur;
            }
        }
    }

    return gagnant;
}

// 4. Calcul des points du pli
int ReglesDameDePique::compterPointsPli(const Pli& pli) const {
    int points = 0;

    for (const auto& [joueur, carte] : pli.getCartesJouees()) {
        // Chaque carte de Cœur vaut 1 point
        if (carte->getCouleur() == Couleur::COEUR) {
            points += 1;
        }
        // La Dame de Pique (Pallas) vaut 13 points
        else if (carte->getCouleur() == Couleur::PIQUE && carte->getValeur() == 12) { // 12 correspond souvent à la Dame/Queen
            points += 13;
        }
    }

    return points;
}