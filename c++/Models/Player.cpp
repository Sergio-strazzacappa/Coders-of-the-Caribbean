#include <iostream>
#include "Player.h"

using namespace std;

// Constructors
Player::Player()
{
    this->ship_count = 0;
    this->ships;
}

Player::Player(int ship_count, vector<Ship> ships)
{
    this->ship_count = ship_count;
    this->ships = ships;
}

// Getters
int Player::get_ship_count()
{
    return this->ship_count;
}

vector<Ship> Player::get_ships()
{
    return this->ships;
}

// Setters
void Player::set_ship_count(int ship_count)
{
    this->ship_count = ship_count;
}

void Player::set_ships(vector<Ship> ships)
{
    this->ships = ships;
}

void Player::add_ship(Ship ship)
{
    this->ships.push_back(ship);
}

string Player::debug()
{
    string output = "Player: { "  + to_string(this->ship_count);
    for(int i = 0; i < ship_count; i++)
    {
        output += "\n " + this->ships[i].get_coordinate().debug();
    }
    output += " \n } ";
    return output;
}