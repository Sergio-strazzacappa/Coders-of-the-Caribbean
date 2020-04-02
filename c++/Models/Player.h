#ifndef PLAYER
#define PLAYER

#include <vector>
#include "Objects/Ship.h"

using namespace std;

class Player
{
    int ship_count;
    vector<Ship> ships;

    public:
        Player();
        Player(int ship_count, vector<Ship> ships);
        int get_ship_count();
        vector<Ship> get_ships();
        void set_ship_count(int ship_count);
        void set_ships(vector<Ship>);
        void add_ship(Ship ship);
        string debug();
};

#endif