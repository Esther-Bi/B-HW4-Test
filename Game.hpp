#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#pragma once
#ifndef GAME_HEADER
#define GAME_HEADER

namespace coup{

    class Game{
        public:
            int turn_num;
            std::vector<std::string> players_names;
            std::string winner_name;
        public:
            Game();
            int last_player()const;
            std::string turn();
            std::vector<std::string> players()const;
            std::string winner()const;
            void add_player(std::string & player);
            ~Game();

    };

}

#endif