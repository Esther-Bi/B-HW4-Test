#include "Game.hpp"
#include "Player.hpp"
#include "Contessa.hpp"
using namespace std;

namespace coup
{

    Contessa::Contessa(coup::Game & game , string name) : Player(game,name){
        // constuctor
        this->p_role = CO;
    }

    void Contessa::block(coup::Assassin & other){
        int x=mag;
    }

    Contessa::~Contessa(){
    }

}