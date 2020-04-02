#include <string>
#include "Entity.h"
#include "../Map/Point.h"

using namespace std;

// Constructors
Entity::Entity()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
}

Entity::Entity(int id, string type, Point coordinate)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
}

// Getters
int Entity::get_id()
{
    return this->id;
}

string Entity::get_type()
{
    return this->type;
}

Point Entity::get_coordinate()
{
    return this->coordinate;
}

// Setters
void Entity::set_id(int id)
{
    this->id = id;
}

void Entity::set_type(string type)
{
    this->type = type;
}

void Entity::set_coordinate(Point coordinate)
{
    this->coordinate = coordinate;
}

string Entity::debug()
{
    return "Entity: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + " }"; 
}