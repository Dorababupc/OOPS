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
    //use only r,not r( ) in case of non parametrised.
    Rectangle r;
    cout<<r.breadth<<endl;
}