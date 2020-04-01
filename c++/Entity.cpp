#include <string>
#include "Point.h"
#include "Entity.h"

using namespace std;

Entity::Entity()
{
    this->id = -1;
    this->type = "";
    this->coordinate;
}

Entity::Entity(int id, string type, Point coordinate)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
}

string Entity::debug()
{
    return "Id: " + to_string(this->id) + " Type: " + this->type + " Coord: " + this->coordinate.debug(); 
}