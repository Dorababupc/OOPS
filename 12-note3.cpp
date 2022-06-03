#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    int b;
    demo(int a,int b){
        this->a=a;
        this->b=b;
    }
    demo(demo &f){
        a=f.a+1;
        b=f.b+1;
    }
};
int main(){
    demo k(1,2);
    demo g=k;
    //Here this acts as a copy constructor.Since we have ourselves created a copy constructor this one will be
    //..executed.If we don't write our own copy constructor then the compiler could have created a copy constuctor of it's own.
    cout<<k.a<<endl;
    cout<<k.b<<endl;
    cout<<g.a<<endl;
    cout<<g.b<<endl;
}
