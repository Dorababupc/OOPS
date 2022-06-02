#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(Rectangle &x){
        length=x.length;
        breadth=x.breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r;
    Rectangle a(r);
    cout<<r.length<<endl;
    cout<<a.length<<endl;
    r.length=10;
    cout<<r.length<<endl;
    cout<<a.length<<endl;

    //Here we may notice that even we are assigning the value of r to a, later when r changes it doesn't effect a.
    //So, here a shallow copy constructor is enough for us.
}