#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

#ifndef ASSASSIN_HEADER
#define ASSASSIN_HEADER

namespace coup{

    class Assassin : public Player{
        private:
            int p_role;
            int coup_player;
        public:
            Assassin(coup::Game & game , string name);
            static void return_player(); // השחקן האחרון שהוא הדיח חוזר למשחק
            static void coup(coup::Player & other); // של עצמו מיוחד
            ~Assassin();

    };

}

#endif