//
// Created by etudiant on 22-05-03.
//
#include "Pile.h"
#include "gtest/gtest.h"

TEST(Pile, constructeur_noexcept) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

TEST(Pile, constructeur_pile_est_vide) {
    Pile<int> p(50) ;
    EXPECT_TRUE(p.vide()) ;
}

TEST(Pile, constructeur_pile_disponible_capacite) {
    Pile<int> p(50) ;
    EXPECT_EQ(50, p.disponible()) ;
}

TEST(Pile, constructeur_capacite_nulle_throw) {
    EXPECT_THROW(Pile<int> p(0), std::invalid_argument) ;
}

TEST(Pile, pop_pile_vide_throw) {
    Pile<int> p ;
    EXPECT_THROW(p.pop(), std::runtime_error) ;
}

TEST(Pile, push_ajouter_un_element_non_vide) {
    Pile<int> p ;
    p.push(1) ;
    EXPECT_FALSE(p.vide()) ;
}

TEST(Pile, push_un_element_diminue_disponible) {
    Pile<int> p(13) ;
    p.push(1) ;
    EXPECT_EQ(12, p.disponible()) ;
}

TEST(Pile, push_en_element_top_recupere_element) {
    Pile<int> p(4) ;
    p.push(23) ;
    EXPECT_EQ(23, p.top()) ;
}

TEST(Pile, push_pile_pleine_throw) {
    Pile<int> p(4) ;
    p.push(1) ;
    p.push(2) ;
    p.push(3) ;
    p.push(4) ;
    EXPECT_THROW(p.push(5), std::runtime_error) ;
}

TEST(Pile, sequence_push_pop_lifo) {
    Pile<int> p(10) ;

    p.push(1) ;
    p.push(2) ;
    p.push(3) ;
    p.push(4) ;
    p.push(5) ;

    EXPECT_EQ(p.top(), 5) ;
    p.pop() ;
    EXPECT_EQ(p.top(), 4) ;
    p.pop() ;
    EXPECT_EQ(p.top(), 3) ;
    p.pop() ;
    EXPECT_EQ(p.top(), 2) ;
    p.pop() ;
    EXPECT_EQ(p.top(), 1) ;
    p.pop() ;
    EXPECT_TRUE(p.vide()) ;
}

TEST(Pile, sequence_push_pop_disponibilite) {
    Pile<int> p(5) ;

    p.push(1) ;
    EXPECT_EQ(4, p.disponible()) ;
    p.push(2) ;
    EXPECT_EQ(3, p.disponible()) ;
    p.push(3) ;
    EXPECT_EQ(2, p.disponible()) ;
    p.push(4) ;
    EXPECT_EQ(1, p.disponible()) ;
    p.push(5) ;
    EXPECT_EQ(0, p.disponible()) ;

    EXPECT_TRUE(p.pleine()) ;
    EXPECT_THROW(p.push(0), std::runtime_error) ;

}

TEST(Pile, sequence_push_pop_resize) {
    Pile<int> p(5) ;

    for (auto i = 0; i < 5; ++i) p.push(1) ;
    EXPECT_TRUE(p.pleine()) ;
    p.redimensionner(8) ;
    EXPECT_FALSE(p.pleine()) ;
    EXPECT_EQ(3, p.disponible()) ;
    for (auto i = 0; i < 5; ++i) {
        EXPECT_EQ(1, p.top()) ;
        p.pop() ;
    }
    EXPECT_TRUE(p.vide()) ;
}