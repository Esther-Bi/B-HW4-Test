#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

#ifndef CAPTAIN_HEADER
#define CAPTAIN_HEADER

namespace coup{

    class Captain : public Player{
        private:
            int p_role;
        public:
            Captain(coup::Game & game , string name);
            static void steal(coup::Player & other);
            static void block(coup::Player & other);
            ~Captain();

    };

}

#endif