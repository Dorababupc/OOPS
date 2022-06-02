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
    cout<<r.breadth<<endl;
}