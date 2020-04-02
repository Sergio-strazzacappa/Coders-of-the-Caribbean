#include <iostream>
#include "Services/Io.h"
#include "Models/Game.h"

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

void print_ships()
{
    cerr << "List of ships: " << endl;
    for(auto s : ships)
    {
        cerr << s.debug() << endl;
    }
}

void print_barrels()
{
    cerr << "List of barrels: " << endl;
    for(auto b : barrel)
    {
        cerr << b.debug() << endl;
    }
}

void reset()
{
    ships.clear();
    barrel.clear();
}
*/

// TODO: Revisar la entrada de datos. Los datos internos no se 
// actualizan correctamente, por ejemplo:
// game.get_player1().set_ship_count(ship_count);
// Revisar el diagrama de clases, esta desalineado

int main()
{
    while(true)
    {
        
        Game game = Io::read_turn();
        cerr << game.debug() << endl;
        cerr << game.get_player1().get_ships().size() << endl;
    }
    return 0;
}
        
 /* 
            if(entity_type == "SHIP")
            {
                // Ship
                Ship s(entity_id, entity_type, Point(x, y), arg1, arg2, arg3, arg4);
                ships.push_back(s);
            }
            else if(entity_type == "BARREL")
            {
                // Barrel
                Barrel b(entity_id, entity_type, Point(x, y), arg1);
                barrel.push_back(b);
            }
        }
        print_ships();
        print_barrels();
        cout << "WAIT" << endl;
    }
*/