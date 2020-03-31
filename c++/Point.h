#ifndef POINT
#define POINT

#include <string>

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
#endif