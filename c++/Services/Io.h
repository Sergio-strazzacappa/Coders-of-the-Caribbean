#ifndef IO
#define IO

#include "../Models/Game.h"
#include "../Models/Map/Point.h"

using namespace std;

class Io
{
    public:
        //Input methods
        static Game read_turn();
        //Output methods
        static void move(Point position);
        //Error methods
        static void print_game_state(Game game);
        
};

#endif