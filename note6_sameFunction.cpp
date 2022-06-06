#include<iostream>
using namespace std;
class Base{
    public:
    int a=10;
    void show(){
        cout<<"base"<<endl;
    }
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
   d.show();
   d.Base::show();
   //The same note5 applies incase of a function name also, infact the function which is redefined in the
  //child class is said to overridden function.
}
