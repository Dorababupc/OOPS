#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"This is defalut non param constuctor of base class"<<endl;
    }
    base(int x){
        cout<<"This is parametrised constuctor of base class"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"This is defult constructor of dervied class"<<endl;
    }
    derived(int x){
        cout<<"This is parametrised constuctor of derived class"<<endl;
    }
    derived(int x,int y):base(y){
        cout<<"This is parametrised constructor of derived class "<<x<<endl;
    }
};
int main(){
     derived d;
     //a default constructor of derived class will be called which inturn will call the default constructor of the base class.
     derived e(10);
     //A parametrised constructor of the derived class will be called whcih inturn will call the defalut constructor of the base class.
     derived f(100,200);
     //A paramtrised constructor of the derived class iwll be called whcih inturn will call the parametrised constructor of the base classs, passing the required parameters.

}
