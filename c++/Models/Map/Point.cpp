#include <string>
#include <cmath>
#include "Point.h"

using namespace std;

// Constructors
Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

// Getters
int Point::get_x()
{
    return this->x;
}

int Point::get_y()
{
    return this->y;
}

// Setters
void Point::set_x(int x)
{
    this->x = x;
}

void Point::set_y(int y)
{
    this->y = y;
}

// Calcula la distancia entre dos puntos
double Point::distance(Point point)
{
    return sqrt(pow(this->x - point.get_x(), 2) + pow(this->y - point.get_y(), 2));
}

string Point::debug()
{
    return "(" + to_string(this->x) + ", " + to_string(this->y) + ")"; 
}