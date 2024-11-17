#include <iostream>
#include "../../include/point.h"
#include "../../include/circle.h"

using namespace std;

void isInCircle(Circle &c, Point &p)
{
    int distanceSquared = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    int radiusSquared = c.getR() * c.getR();

    if (distanceSquared == radiusSquared)
    {
        cout << "点在圆上" << endl;
    }
    else if(distanceSquared < radiusSquared)
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}

int main()
{
    Circle c1;
    c1.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);

    Point p;
    p.setX(10);
    p.setY(10);

    isInCircle(c1, p);
    return 0;
}