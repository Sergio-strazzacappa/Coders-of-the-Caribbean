#ifndef SHIP
#define SHIP

#include <string>
#include "Point.h"
#include "Entity.h"

using namespace std;

class Ship : public Entity
{
    int orientation;
    int speed;
    int remaining_rum;
    int owner;

    public:
        Ship();
        Ship(int id, string type, Point coordinate, int orientation, int speed, int remaining_rum, int owner);

        string debug();
};

#endif