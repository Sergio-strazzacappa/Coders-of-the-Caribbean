#include <string>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point();
        Point(int x, int y);
        int get_x();
        int get_y();
        string debug();
};


class Entity
{
    int id;
    string type;
    Point coordinate;

    public:
        Entity();
        Entity(int id, string type, Point coordinate);
};



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

const int X = 23;
const int Y = 21;

array<array<Point, X>, Y> map;
const string ACTIONS[] =
{

};

void print_map()
{
    for(auto y : map)
    {
        for(auto x: y)
        {
            cerr << x.debug() + ' ';
        }
        cerr << endl;
    }
}

int main()
{
    int my_ship_count;
    int entity_count;
    while(true)
    {
        cin >> my_ship_count;
        cin.ignore();
        cin >> entity_count;
        cin.ignore();
        for(int i = 0; i < entity_count; i++)
        {
            int entity_id;
            string entity_type;
            int x;
            int y;

            cin >> entity_id >> entity_type >> x >> y;

            Point coordinate(x, y);
            Entity(entity_id, entity_type, coordinate);
        }
    }
    return 0;
}
