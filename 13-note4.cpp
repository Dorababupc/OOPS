#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    int b;
    demo(){
        a=-2;
        b=-2;
    }
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
    demo g;
    cout<<k.a<<endl;
    cout<<k.b<<endl;
    cout<<g.a<<endl;
    cout<<g.b<<endl;
    g=k;
    cout<<g.a<<endl;
    cout<<g.b<<endl;
    cout<<&g.a<<endl;
    cout<<&k.a<<endl;

    //So, we are clear that if we have given them in two different lines then in the second line not a copy constructor is called but just the copies of the values are passed.
    //We can't say this as a constructor since they are not assigned values at the time of creation.
}
