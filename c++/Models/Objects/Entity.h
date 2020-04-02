#ifndef ENTITY
#define ENTITY

#include <string>
#include "../Map/Point.h"

using namespace std;

class Entity
{
    protected:
        int id;
        string type;
        Point coordinate;

    public:
        Entity();
        Entity(int id, string type, Point coordinate);
        int get_id();
        string get_type();
        Point get_coordinate();
        void set_id(int id);
        void set_type(string type);
        void set_coordinate(Point coordinate);
        string debug();
};

#endif