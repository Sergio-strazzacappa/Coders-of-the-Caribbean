#include <string>
#include "Ship.h"
#include "../map/Point.h"

using namespace std;

// Constructors
Ship::Ship()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
    this-> orientation = 0;
    this->speed = 0;
    this->remaining_rum = 0;
    this->owner = 0;
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

// Getters
int Ship::get_orientation()
{
    return this->orientation;
}

int Ship::get_speed()
{
    return this->speed;
}

int Ship::get_remaining_rum()
{
    return this->remaining_rum;
}

int Ship::get_owner()
{
    return this->owner;
}

// Setters
void Ship::set_orientation(int orientation)
{
    this->orientation = orientation;
}

void Ship::set_speed(int speed)
{
    this->speed = speed;
}

void Ship::set_remaining_rum(int remaining_rum)
{
    this->remaining_rum = remaining_rum;
}

void Ship::set_owner(int owner)
{
    this->owner = owner;
}

string Ship::debug()
{
    return "Ship: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + ", " + to_string(this->orientation) + ", " + to_string(this->speed) + ", " + to_string(this->remaining_rum) + ", " + to_string(this->owner) + " }";
}