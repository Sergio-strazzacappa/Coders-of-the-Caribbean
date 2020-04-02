#include <iostream>
#include <string>
#include "IO.h"
#include "../Models/Game.h"
#include "../Models/Player.h"
#include "../Models/Map/Point.h"

using namespace std;

Game Io::read_turn()
{
    Game game;
    
    int ship_count;
    int entity_count;

    cin >> ship_count;
    cin.ignore();
    cin >> entity_count;
    cin.ignore();
    game.set_entity_count(entity_count);
    Player player1();
    Player player2();
    game.get_player1().set_ship_count(ship_count);
    game.get_player2().set_ship_count(ship_count);

    for(int i = 0; i < entity_count; i++)
    {
        int entity_id;
        string entity_type;
        int x;
        int y;
        int arg1;
        int arg2;
        int arg3;
        int arg4;

        cin >> entity_id >> entity_type >> x >> y >> arg1 >> arg2 >> arg3 >> arg4;
        cin.ignore();

        if(entity_type == "SHIP")
        {
            Ship ship(entity_id, entity_type, Point(x, y), arg1, arg2, arg3, arg4);
            if(arg4 == 0)
            {
                // The ship is controlled by my opponent
                game.add_ship(1, ship);
            }
            else
            {
                // The ship is controlled by me
                game.add_ship(0, ship);
            }
        }
    }
    return game;   
}