#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(int l=0,int b=0){
        length=l;
        breadth=b;
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
    Rectangle r(1);
    //The second paramter b will automatically be initialised as we have given the default paramter value for that.
    //So, you can notice that this(parametrised constructor with default parameters can act as both parametrised and non parametrised constructor.
    cout<<r.breadth<<endl;
}
