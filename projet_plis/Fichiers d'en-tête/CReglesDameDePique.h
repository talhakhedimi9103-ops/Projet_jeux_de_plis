#ifndef REGLES_DAME_DE_PIQUE_HPP
#define REGLES_DAME_DE_PIQUE_HPP

#include "CReglesMoteur.h"

class ReglesDameDePique : public ReglesMoteur {
public:
    ReglesDameDePique() = default;
    ~ReglesDameDePique() override = default;

    void distribuerCartes(Deck& paquet, std::vector<std::shared_ptr<Joueur>>& joueurs) override;

    bool validerCoup(const std::shared_ptr<Carte>& carte, const Main& main, const Pli& pliActuel) const override;

    std::shared_ptr<Joueur> determinerGagnantPli(const Pli& pli) const override;

    int compterPointsPli(const Pli& pli) const override;
};

#endif // REGLES_DAME_DE_PIQUE_HPP