#include "Game.hpp"
#include "Player.hpp"
#include "Ambassador.hpp"
using namespace std;

namespace coup
{

    Ambassador::Ambassador(coup::Game & game , string name) : Player(game,name){
        // constuctor
        this->p_role = AM;
    }

    void Ambassador::transfer(coup::Player & from, coup::Player & to){
        int x=mag;
    }

    void Ambassador::block(coup::Captain & other){
        int x=mag;
    }

    Ambassador::~Ambassador(){
    }

}