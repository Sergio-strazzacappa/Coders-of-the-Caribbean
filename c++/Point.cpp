#include <string>
#include "Point.h"

using namespace std;

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
        
int Point::get_x()
{
    return this->x;
}

int Point::get_y()
{
    return this->y;
}

string Point::debug()
{
    return "( " + to_string(this->x) + " " + to_string(this->y) + " )"; 
}