#include <string>
#include "Barrel.h"
#include "Point.h"
#include "Entity.h"

using namespace std;

Barrel::Barrel()
{
    this->id = -1;
    this->type = "";
    this->coordinate;
    this->quantity = -1;
}

Barrel::Barrel(int id, string type, Point coordinate, int quantity)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
    this->quantity = quantity;
}

string Barrel::debug()
{
    return Entity::debug() + " Quantity: " + to_string(this->quantity);
}