#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
using namespace std;

#ifndef CONTESSA_HEADER
#define CONTESSA_HEADER

namespace coup{

    class Contessa : public Player{
        private:
            int p_role;
        public:
            Contessa(coup::Game & game , string name);
            static void block(coup::Player & other);
            ~Contessa();

    };

}

#endif