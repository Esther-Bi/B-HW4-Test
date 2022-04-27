#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
using namespace std;

namespace coup
{

    Duke::Duke(coup::Game & game , string name) : Player(game,name){
        // constuctor
        this->p_role = DU;
        game.add_player(name);
        cout << game.last_player() << endl;
    }

    void Duke::tax(){
        this->coi += 3;
    }

    void Duke::block(coup::Player & other){
        int x=mag;
    }

    Duke::~Duke(){
    }

}