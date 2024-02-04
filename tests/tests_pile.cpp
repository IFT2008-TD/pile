//
// Created by etudiant on 22-05-03.
//
#include "Pile.h"
#include "gtest/gtest.h"

TEST(Pile, constructeur_noexcept) {
    EXPECT_NO_THROW(Pile<int> p) ;
}

class PileTest : public ::testing::Test {
protected:

    PileTest() : pile10(10), pile1(1) {}

    Pile<int> pile10 ;
    Pile<int> pile1 ;

};

TEST_F(PileTest, constructeur_pile_vide) {

}

TEST_F(PileTest, constructeur_pile_non_pleine) {

}

TEST_F(PileTest, push_pile_pleine_throw) {

}

TEST_F(PileTest, pop_pile_vide_throw) {

}

TEST_F(PileTest, push_pop_recupere_le_dernier) {

}

