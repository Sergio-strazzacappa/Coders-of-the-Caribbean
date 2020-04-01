#ifndef PLAYER
#define PLAYER

#include <array>
#include <string>
#include <vector>
#include "Entity.h"
#include "Ship.h"
#include "Barrel.h"

using namespace std;

int my_ship_count;
int entity_count;
vector<Ship> ships;
vector<Barrel> barrel;
const int X = 23;
const int Y = 21;

array<array<Point, X>, Y> map;
const string ACTIONS[] =
{

};

void print_map();
void print_ships();
void print_barrels();
void reset();
int main();

#endif