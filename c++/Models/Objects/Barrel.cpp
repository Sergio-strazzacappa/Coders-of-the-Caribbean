#include <string>
#include "Barrel.h"
#include "../Map/Point.h"

using namespace std;

// Constructors
Barrel::Barrel()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
    this->quantity = 0;
}

Barrel::Barrel(int id, string type, Point coordinate, int quantity)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
    this->quantity = quantity;
}

// Getters
int Barrel::get_quantity()
{
    return this->quantity;
}

// Setters
void Barrel::set_quantity(int quantity)
{
    this->quantity = quantity;
}

string Barrel::debug()
{
    return "Barrel: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + ", " + to_string(this->quantity) + " }";
}