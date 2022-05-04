//
// Created by etudiant on 22-05-03.
//
#include "Pile.h"
#include "gtest/gtest.h"

TEST(Pile, constructeur_noexcept) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, constructeur_capacite_non_valide_throw) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, pop_pile_vide_throw) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, push_pile_pleine_throw) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, pile_initiale_vide) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, push_non_vide) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, push_pop_recupere_valeur) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, push_pop_redevient_vide) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, push_pop_sequence) {
   EXPECT_NO_THROW(Pile<int> p) ;
}