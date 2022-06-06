#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    int b;
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"i am called"<<endl;
    }
    int c;
    int d;
};
int main(){
   Base *ptr;
   ptr=new Derived();
   cout<<sizeof(*ptr)<<endl;
   //So, it is clearly observed that an object of derived class is created but will only have the members derived from the base class.
}
