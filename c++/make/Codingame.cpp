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
    protected:
        int id;
        string type;
        Point coordinate;

    public:
        Entity();
        Entity(int id, string type, Point coordinate);
        string debug();
};




class Ship : public Entity
{
    int orientation;
    int speed;
    int remaining_rum;
    int owner;

    public:
        Ship();
        Ship(int id, string type, Point coordinate, int orientation, int speed, int remaining_rum, int owner);

        string debug();
};




class Barrel : public Entity
{
    int quantity;

    public:
        Barrel();
        Barrel(int id, string type, Point coordinate, int quantity);
        string debug();
};




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
    return "(" + to_string(this->x) + ", " + to_string(this->y) + ")"; 
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

string Entity::debug()
{
    return "Id: " + to_string(this->id) + " Type: " + this->type + " Coord: " + this->coordinate.debug(); 
}


Ship::Ship()
{
    this->id = -1;
    this->type = "";
    this->coordinate;
    this-> orientation = -1;
    this->speed = -1;
    this->remaining_rum = -1;
    this->owner = -1;
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

string Ship::debug()
{
    return Entity::debug() + " Orientation: " + to_string(this->orientation) + " Speed: " + to_string(this->speed) + " Remaining rum: " + to_string(this->remaining_rum) + " Owner: " + to_string(this->owner);
}


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

void print_ships()
{
    cerr << "List of ships: " << endl;
    for(auto s : ships)
    {
        cerr << s.debug() << endl;
    }
}

void print_barrels()
{
    cerr << "List of barrels: " << endl;
    for(auto b : barrel)
    {
        cerr << b.debug() << endl;
    }
}

void reset()
{
    ships.clear();
    barrel.clear();
}

int main()
{
    while(true)
    {
        cin >> my_ship_count;
        cin.ignore();
        cin >> entity_count;
        cin.ignore();

        reset();
        
        for(int i = 0; i < entity_count; i++)
        {
            int entity_id;
            string entity_type;
            int x;
            int y;
            int arg1, arg2, arg3, arg4;

            cin >> entity_id >> entity_type >> x >> y >> arg1 >> arg2 >> arg3 >> arg4;
            cin.ignore();

            if(entity_type == "SHIP")
            {
                // Ship
                Ship s(entity_id, entity_type, Point(x, y), arg1, arg2, arg3, arg4);
                ships.push_back(s);
            }
            else if(entity_type == "BARREL")
            {
                // Barrel
                Barrel b(entity_id, entity_type, Point(x, y), arg1);
                barrel.push_back(b);
            }
        }
        print_ships();
        print_barrels();
        cout << "WAIT" << endl;
    }
    return 0;
}
