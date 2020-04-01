#include <string>
#include <iostream>
#include "Player.h"
#include "Point.h"
#include "Entity.h"
#include "Ship.h"

using namespace std;

void print_map()
{
    for(auto y : map)
    {
        for(auto x: y)
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

int main()
{
    while(true)
    {
        cin >> my_ship_count;
        cin.ignore();
        cin >> entity_count;
        cin.ignore();

        reset();
        
        for(int i = 0; i < entity_count; i++)
        {
            int entity_id;
            string entity_type;
            int x;
            int y;
            int arg1, arg2, arg3, arg4;

            cin >> entity_id >> entity_type >> x >> y >> arg1 >> arg2 >> arg3 >> arg4;
            cin.ignore();

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
    return 0;
}