#include "Game.hpp"
using namespace std;

namespace coup
{

    Game::Game(){
        // constuctor
        this->turn_num = 0;
        this->winner_name = "?";
    }

    int Game::last_player()const{
        return this->players_names.size();
    }

    std::string Game::turn(){
        return this->players_names.at((unsigned long)this->turn_num);
    }

    std::vector<std::string> Game::players()const{
        return this->players_names;
    }

    std::string Game::winner()const{
        if (this->winner_name == "?"){
            throw std::domain_error("there is no winner yet");
        }
        return this->winner_name;
    }

    void Game::add_player(std::string & player){
        this->players_names.push_back(player);
    }

    Game::~Game(){
    }

}