//
// Created by etudiant on 22-05-03.
//

#ifndef PILE_INTRO_PILEIMPLEMENTATION_H
#define PILE_INTRO_PILEIMPLEMENTATION_H

#include "Pile.h"

/**
 * @brief Construit une pile d'éléments de type T, initialement vide.
 * @tparam T Type des éléments contenus dans la pile
 * @param capacite_maximale Nombre maximal d'éléments dans la pile à tout moment.
 */
template<typename T>
Pile<T>::Pile(std::size_t capacite_maximale){}

/**
 * @brief Ajoute un élément sur la pile.
 * @tparam T Type de l'élément rajouté.
 * @param valeur Valeur de l'élément rajouté.
 * @except runtime_error si la pile est déjà remplie à capacité.
 */
template<typename T>
void Pile<T>::push(const T &valeur) {}

/**
 * @brief Retire un élément de la pile.
 * @tparam T Type de l'élément retiré.
 * @except runtime_error si la pile est vide.
 */
template<typename T>
void Pile<T>::pop() {

}

/**
 * @brief Lit l'élément sur le dessus de la pile
 * @tparam T Type d'éléments stockés dans la pile
 * @return La valeur de l'élément au-dessus de la pile
 * @except runtime_error si la pile est vide
 */
template <typename T>
T Pile<T>::top() const {
    T bidon ;
    return bidon ;
}

/**
 * @brief Vérifie si la pile contient des éléments.
 * @tparam T Type d'éléments contenus dans la pile.
 * @return true si, et seulement si, la pile est vide.
 */
template<typename T>
bool Pile<T>::vide() const {
    return false ;
}

/**
 * @brief Vérifie si la pile est pleine
 * @tparam T Type des éléments contenus dans la pile
 * @return true si, et seulement si, la pile est remplie à capacité.
 */
template<typename T>
bool Pile<T>::pleine() const {
    return true ;
}

/**
 * @brief Compte le nombre de places restantes sur la pile
 * @tparam T Type des éléments contenus dans la pile
 * @return Le nombre d'insertion possibles avant que la pile ne soit saturée.
 */
template <typename T>
size_t Pile<T>::disponible() const {
    return 0 ;
}

/**
 * @brief Change la capacité de la pile.  Si la nouvelle capacité est plus grande que l'ancienne, l'intégrité des
 * données présentes est garantie.  Si on rapetisse la pile, le comportement est non défini.
 * @tparam T Type des éléments que contient la pile.
 */
template <typename T>
void Pile<T>::redimensionner(size_t n) {

}

/**
 * @brief Efface complètement la pile, mais ne change pas sa capacité.  N'a aucun effet si la pile est vide.
 * @tparam T Type des éléments que contient la pile.
 */
template<typename T>
void Pile<T>::vider() {

}


#endif //PILE_INTRO_PILEIMPLEMENTATION_H
