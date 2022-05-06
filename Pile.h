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
 * @class Classe implantant une pile générique.  Attention: il ne s'agit pas ici simplement d'une classe mais d'un patron
 * de classe.  La classe Pile contient un paramètre de type: c'est ce qui est indiqué avec l'énoncé template<typename T>.
 * Si on veut créer une Pile d'entiers on utilisera l'énoncé Pile<int> maPile.
 * Si on veut créer une Pile de réels, on utilisera l'énoncé Pile<double> maPile.
 * Si on a créé une classe appelée Tugabudoire, et qu'on veut créer une Pile de Tugabudoires on utilisera l'énoncé Pile<Tugabudoire> maPile.
 * Comparez avec la classe vector...
 *
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
