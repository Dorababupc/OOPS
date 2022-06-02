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
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    //use only r,not r( ) in case of non parametrised.
    Rectangle r;
    cout<<r.breadth<<endl;
    Rectangle a(r);
    cout<<a.breadth<<endl;
    //NOTE: compiler automatically copies the constructor by default. This is called shallow constructor.Which just copies without taking care of dynamically allocated memory.
    //This is also similar to what we write without taking care of the dynamic memory allocation.
}