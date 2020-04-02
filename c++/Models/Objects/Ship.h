#ifndef SHIP
#define SHIP

#include <string>
#include "../Map/Point.h"
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
        int get_orientation();
        int get_speed();
        int get_remaining_rum();
        int get_owner();
        void set_orientation(int orientation);
        void set_speed(int speed);
        void set_remaining_rum(int remaining_rum);
        void set_owner(int owner);
        string debug();
};

#endif