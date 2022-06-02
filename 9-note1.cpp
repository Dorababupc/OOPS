#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(Rectangle &r){
         length=r.length;
         breadth=r.breadth;
    }
};
int main(){
    Rectangle r;
    Rectangle a(r);
}


