#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
};
class Cuboid:public Rectangle{
    public:
    int h;
};
class Table{
    Rectangle r;
    int h;
};
//In this example cuboid is interiting from the rectangle class.So, basically cuboid isA rectangle.
//A table contains a rectangle object a table hasA rectangle.
