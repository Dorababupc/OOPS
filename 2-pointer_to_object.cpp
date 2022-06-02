#include<iostream>
using namespace std;
class Rectange
{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectange r;
    Rectange *p;
    p=&r;
    // here the pointer is created in stack
    p->length=10;
    p->breadth=20;
    cout<<"Area is "<<p->area()<<endl;
}


