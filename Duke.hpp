#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

#pragma once
#ifndef DUKE_HEADER
#define DUKE_HEADER

namespace coup{

    class Duke : public Player{
        private:
            int p_role;
        public:
            Duke(coup::Game & game , string name);
            void tax();
            static void block(coup::Player & other);
            ~Duke();

    };

}

#endif