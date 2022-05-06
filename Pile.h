/**
 * @file Fichier contenant l'interface de la classe Pile.
 * @author Pascal Charpentier
 * @date 2022-05-04
 * @version 0.1
 */

#ifndef PILE_INTRO_PILE_H
#define PILE_INTRO_PILE_H

#include <vector>
#include <stdexcept>

/**
 * @class Classe implantant une pile générique.
 * @tparam T Type d'éléments de la pile.  Tous les éléments sur la pile doivent avoir ce type.
 */
template <typename T>
class Pile {
public:

    explicit Pile   (std::size_t = 10) ; // Construction
    void     push   (const T&) ;         // Ajouter un élément
    T        pop    () ;                 // Retirer un élément
    bool     vide   () const ;           // Vérifier si la pile contient des éléments
    bool     pleine () const ;           // Vérifier si la pile est saturée

private:

    /** @var Structure qui contient les données */
    std::vector<T> pile ;

    /** @var Nombre d'éléments sur la pile.  Ne peut être négatif */
    std::size_t cardinal ;
};



#include "PileImplementation.h"

#endif //PILE_INTRO_PILE_H
