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
    r.length=10;
    r.breadth=20;
    cout<<"Area is "<<r.area()<<endl;
}

