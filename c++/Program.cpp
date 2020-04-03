#include <iostream>
#include "Services/Io.h"
#include "Models/Game.h"
#include "Models/Objects/Barrel.h"
#include "Map/Point.h"

using namespace std;

/*#include <string>
#include "Player.h"
#include "Point.h"
#include "Entity.h"
#include "Ship.h"
/*
const int X = 23;
const int Y = 21;

array<array<Point, X>, Y> map;
const string ACTIONS[] =
{

};

void print_map()
{
    for(auto y : map)
    {
        for(auto x : y)
        {
            cerr << x.debug() + ' ';
        }
        cerr << endl;
    }
}

*/

//  TODO: Revisar los debug()

// Determina cual es el barril mas cercano a ship
Barrel nearest_barrel(Ship ship, vector<Barrel> barrels)
{
    Barrel barrel;
    Point ship_position = ship.get_coordinate();
    double min_distance = 99999;
    for(int i = 0; i < barrels.size(); i++)
    {
        Point barrel_position = barrels[i].get_coordinate();
        double distance = ship_position.distance(barrel_position);
        //cerr << "Distancia entre: " << ship_position.debug() << " y " << barrel_position.debug() << " es de " << distance << endl;
        if(distance < min_distance)
        {
            min_distance = distance;
            barrel = barrels[i];
        }
    }
    return barrel;
}

int main()
{
    while(true)
    {
        Game game = Io::read_turn();
        string s;
        //Io::print_game_state();
        int ship_count = game.get_player1().get_ship_count();
        vector<Barrel> barrels = game.get_barrels();
        for(int i = 0; i < ship_count; i++)
        {
            Ship ship = game.get_player1().get_ships()[i];
            Barrel barrel = nearest_barrel(ship, barrels);
            Io::move(barrel.get_coordinate());
        }
    }
    return 0;
}
        
 /* 
        cout << "WAIT" << endl;
*/