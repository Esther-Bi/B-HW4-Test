#include "Game.hpp"
#include "Player.hpp"
using namespace std;

namespace coup
{

    Player::Player(coup::Game & game , std::string name){
        // constuctor
        this->name = name;
        this->game = & game;
        this->coi = 0;
        this->last_act = 0;
        this->turn = -1 + (int)game.players().size();
        this->p_role = 0;
    }

    void Player::income(){
        int x=mag;
    }

    void Player::foreign_aid(){
        int x=mag;
    }

    void Player::coup(coup::Player & other){
        int x=mag;
    }

    int Player::coins() const{
        return this->coi;
    }

    std::string Player::role(){
        return "--";
    }

    int Player::last_action() const{
        return this->last_act;
    }

    bool Player::my_turn(){
        return true;
    }

    Player::~Player(){
    }

}