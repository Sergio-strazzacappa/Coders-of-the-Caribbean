#include <string>
#include <vector>
#include <iostream>
#include "Game.h"
#include "Player.h"

using namespace std;

// Constructors
Game::Game()
{
    this->entity_count = 0;
    Player p1;
    Player p2;
    this->players.push_back(p1);
    this->players.push_back(p2);
    this->barrels;
}

// Getters

int Game::get_entity_count()
{
    return this->entity_count;
}

Player Game::get_player1()
{
    return this->players[0];
}

Player Game::get_player2()
{
    return this->players[1];
}

// Setters

void Game::set_entity_count(int entity_count)
{
    this->entity_count = entity_count;
}

void Game::add_ship(int index, Ship ship)
{
    this->players[index].add_ship(ship);
    cerr << this->players[index].debug() << endl;
}

string Game::debug()
{
    string output = "Game: { " + to_string(this->entity_count);
    Player p1 = this->players[0];
    output += ", Player 1: ";
    for(int i = 0; i < p1.get_ship_count(); i++)
    {
        output += this->players[0].get_ships()[i].debug() + " - ";
    }
    Player p2 = this->players[1];
    output += ", Player 2: ";
    for(int i = 0; i < p2.get_ship_count(); i++)
    {
        output += this->players[1].get_ships()[i].debug() + " - ";
    }
    output += ", Barrels: ";
    for(int i = 0; i < this->barrels.size(); i++)
    {
        output += barrels[i].get_coordinate().debug() + " - ";
    }
    output += " }";
    return output;
}