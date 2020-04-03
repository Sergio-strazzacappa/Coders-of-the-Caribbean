#include <string>
#include <vector>
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Objects/Ship.h"
#include "Objects/Barrel.h"

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

vector<Barrel> Game::get_barrels()
{
    return this->barrels;
}

// Setters
void Game::set_entity_count(int entity_count)
{
    this->entity_count = entity_count;
}

void Game::set_ship_count(int ship_count)
{
    this->players[0].set_ship_count(ship_count);
    this->players[1].set_ship_count(ship_count);
}

void Game::add_ship(int index, Ship ship)
{
    this->players[index].add_ship(ship);
}

void Game::add_barrel(Barrel barrel)
{
    this->barrels.push_back(barrel);
}

string Game::debug()
{
    string output = "Game: { Entity count: " + to_string(this->entity_count);
    Player p1 = this->players[0];
    output += "\nPlayer 1: ";
    for(int i = 0; i < p1.get_ship_count(); i++)
    {
        output += "\n" + this->players[0].get_ships()[i].debug();
    }
    Player p2 = this->players[1];
    output += "\nPlayer 2: ";
    for(int i = 0; i < p2.get_ship_count(); i++)
    {
        output += "\n" + this->players[1].get_ships()[i].debug();
    }
    output += "\nBarrels: ";
    for(int i = 0; i < this->barrels.size(); i++)
    {
        output += "\n" + barrels[i].get_coordinate().debug();
    }
    output += "\n}";
    return output;
}