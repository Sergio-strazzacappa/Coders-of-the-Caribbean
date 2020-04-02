#ifndef GAME
#define GAME

#include <vector>
#include <string>
#include "Player.h"
#include "Objects/Barrel.h"

using namespace::std;

class Game
{
    int entity_count;
    vector<Player> players;
    vector<Barrel> barrels;

    public:
        Game();
        int get_entity_count();
        Player get_player1();
        Player get_player2();
        void add_ship(int indice, Ship ship);
        void set_entity_count(int entity_count);
        string debug();
};

#endif