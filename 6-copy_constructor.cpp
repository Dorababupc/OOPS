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
    //Here you may notice that i have used a copy constructor without defining the copy constructor in the class, this works well as the compiler itself created a 
    //copy constuctor which just copies the contents of the other original object to the newly created one.
    
}
