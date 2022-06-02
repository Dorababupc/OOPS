#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(){
        length=-1;
        breadth=-1;
    }
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    //use only r,not r( ) incase of non parametrised or default constructor.
    //Even if we give r() then this line will not be an error. Because compiler thinks this as the function prototype.
    //And the object will not be created so you will get an error at the point where we try to use r as an object.
    Rectangle r;
    cout<<r.breadth<<endl;
}
