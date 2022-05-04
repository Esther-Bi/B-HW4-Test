#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Game.hpp"
using namespace std;

#pragma once
#ifndef PLAYER_HEADER
#define PLAYER_HEADER

namespace coup{

    const int for_update = 2000

    const int mag = 8;

    const int INCOME = 1;
    const int FOREIGN_AID = 2;
    const int COUP = 3;

    const int DU = 11;
    const int AS = 22;
    const int AM = 33;
    const int CA = 44;
    const int CO = 55;

    class Player{
        protected:
            coup::Game * game;
            std::string name;
            int turn;
            int p_role;
            int coi;
            // std::vector<double> mat;
            int last_act;
        public:
            Player(coup::Game & game , std::string name);
            static void income();
            static void foreign_aid();
            static void coup(coup::Player & other);
            int coins() const;
            static std::string role();
            int last_action() const;
            static bool my_turn();
            ~Player();

    };

}

#endif