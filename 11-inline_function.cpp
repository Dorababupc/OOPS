#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter();
    inline bool isSquare();
};
int main(){
    Rectangle r(4,5);
    //This function area will be inline, meaning that a separate block for this is not created instead the function code expands inplace of the function call within the main block, when this function is called.
    cout<<r.area()<<endl;
    //This function perimeter will not be inline, meaning that a separate block for this is created inside the code section of memory and control is transfered to this block from the main block when this function is called.
    cout<<r.perimeter()<<endl;

    //Actually this is supposed to be non inline function like perimeter , but even though it is defined outside the class it still becomes inline because of using the inline keyword in it's function prototype.
    cout<<r.isSquare()<<endl;
    
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}

//NOTE:
//There are two ways to make a function inline:
//1.define it within the class.
//2.define it outside the class but use inline keyword infront of the function prototype.

//And only one way to make a function non inline that is to define it outside the calss.
