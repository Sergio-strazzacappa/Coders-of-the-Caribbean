#include <string>
#include "Ship.h"

using namespace std;

Ship::Ship()
{
    this->id = -1;
    this->type = "";
    this->coordinate;
    this-> orientation = -1;
    this->speed = -1;
    this->remaining_rum = -1;
    this->owner = -1;
}

Ship::Ship(int id, string type, Point coordinate, int orientation, int speed, int remaining_rum, int owner)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
    this->orientation = orientation;
    this->speed = speed;
    this->remaining_rum = remaining_rum;
    this->owner = owner;
}

string Ship::debug()
{
    return Entity::debug() + " Orientation: " + to_string(this->orientation) + " Speed: " + to_string(this->speed) + " Remaining rum: " + to_string(this->remaining_rum) + " Owner: " + to_string(this->owner);
}