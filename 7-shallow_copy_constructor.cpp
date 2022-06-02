#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int *breadth;
    Rectangle(){
        length=1;
        breadth=new int[5];
        for(int i=0;i<5;++i){
            breadth[i]=-1;
        }
    }
    Rectangle(Rectangle &x){
        length=x.length;
        breadth=x.breadth;
    }
    void showBreadth(){
        for(int i=0;i<5;++i){
            cout<<breadth[i]<<endl;
        }
    }
};
int main(){
    Rectangle r;
    Rectangle a(r);
    cout<<r.showBreadth()<<endl;
    cout<<a.showBreadth()<<endl;
    r.breadth[1]=10;
    cout<<r.showBreadth()<<endl;
    cout<<a.showBreadth()<<endl;

    //Here we may notice that when  we are trying to change the values inside r, then values inside a are also changing, because of the dynamic memory allocation done 
    //on a varible in class.
    
    //So, this is just the work done by the compiler without going much into the depth of the copying,-shallow copy constructor.
}
