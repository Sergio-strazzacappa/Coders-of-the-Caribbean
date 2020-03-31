#include <string>
#include <iostream>
#include "Player.h"
#include "Point.h"
#include "Entity.h"

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

int main()
{
    int my_ship_count;
    int entity_count;
    while(true)
    {
        cin >> my_ship_count;
        cin.ignore();
        cin >> entity_count;
        cin.ignore();
        for(int i = 0; i < entity_count; i++)
        {
            int entity_id;
            string entity_type;
            int x;
            int y;

            cin >> entity_id >> entity_type >> x >> y;

            Point coordinate(x, y);
            Entity(entity_id, entity_type, coordinate);
        }
    }
    return 0;
}