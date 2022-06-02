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
    // This is the object creation in stack.
    // Rectange r;
    // r.length=10;
    // r.breadth=20;
    // cout<<"Area is "<<r.area()<<endl;

    //Here is the object creation in heap, with the pointer in stack.
    Rectange *r;
    r=new Rectange();
    r->length=5;
    r->breadth=4;
    cout<<"Area is "<<r->length*r->breadth<<endl;
    
}

