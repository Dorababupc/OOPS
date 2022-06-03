#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    //constructors.
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    //setters.
    void setLength(int l);
    void setBreadth(int b);
    //getters.
    int getLength();
    int getBreadth();
    //facilitators
    int area();
    int prerimeter();
    //inspectors
    bool isSquare();
    //destructor.
    ~Rectangle();
};
int main(){
    Rectangle r(10,10);
    cout<<r.area()<<endl;
    cout<<r.isSquare()<<endl;
}
Rectangle::Rectangle(){
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int lo,int b){
    length=lo;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l){
    length=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::getBreadth(){
    return breadth;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::prerimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"The object has been destroyed"<<endl;
}
//A destructor will automatically called when it becomes out of the scope or at the end of the program.
