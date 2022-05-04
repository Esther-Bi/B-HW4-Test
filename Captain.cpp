#include "Game.hpp"
#include "Player.hpp"
#include "Captain.hpp"
using namespace std;

namespace coup
{

    Captain::Captain(coup::Game & game , string name) : Player(game,name){
        // constuctor
        this->p_role = CA;
    }

    void Captain::steal(coup::Player & other){
        int x=mag;
    }

    void Captain::block(coup::Player & other){
        int x=mag;
    }

    Captain::~Captain(){
    }

}