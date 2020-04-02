#ifndef BARREL
#define BARREL

#include <string>
#include "../Map/Point.h"
#include "Entity.h"

using namespace std;

class Barrel : public Entity
{
    int quantity;

    public:
        Barrel();
        Barrel(int id, string type, Point coordinate, int quantity);
        int get_quantity();
        void set_quantity(int quantity);
        string debug();
};

#endif