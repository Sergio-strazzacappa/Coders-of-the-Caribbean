#ifndef PLAYER
#define PLAYER

#include <array>
#include <string>
#include "Point.h"

using namespace std;

const int X = 23;
const int Y = 21;

array<array<Point, X>, Y> map;
const string ACTIONS[] =
{

};

void print_map();
int main();

#endif