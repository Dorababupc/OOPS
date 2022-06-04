#include<iostream>
using namespace std;
class Parent{
    public:
    int x;
    void display(){
        cout<<x<<endl;
    }
};
class child:public Parent{
    public:
    int y;
    void show(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    Parent p;
    child c;
    p.x=10;
    p.display();
    //though c don't have a data member x , it inherits from the parent class.
    c.y=30;
    c.show();
}
