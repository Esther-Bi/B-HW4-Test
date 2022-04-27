#include "Game.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
using namespace std;

namespace coup
{

    Assassin::Assassin(coup::Game & game , string name) : Player(game,name){
        // constuctor
        this->p_role = AS;
        this->coup_player = 0;
        game.add_player(name);
        cout << game.last_player() << endl;
    }

    void Assassin::return_player(){
        int x=mag;
    }

    void Assassin::coup(coup::Player & other){
        int x=mag;
    }

    Assassin::~Assassin(){
    }

}