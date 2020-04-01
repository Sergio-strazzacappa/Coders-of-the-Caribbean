#ifndef BARREL
#define BARREL

#include "Entity.h"

using namespace std;

class Barrel : public Entity
{
    int quantity;

    public:
        Barrel();
        Barrel(int id, string type, Point coordinate, int quantity);
        string debug();
};

#endif