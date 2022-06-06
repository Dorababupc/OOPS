#include<iostream>
using namespace std;
class Base{
    public:
    int a=10;
};
class Derived:public Base{
    public:
    int a=30;
    void show(){
        cout<<"derived"<<endl;
    }
};
int main(){
   Derived d;
   cout<<d.a<<endl;
   cout<<sizeof(d)<<endl;
   cout<<d.Base::a<<endl;
   //So, whenever we use the same variable name in both derived and base classes, then both are created in the object of derived class.But inorder to access
  //the one that is inside the base calss that we need a scope resolution of base.
}
