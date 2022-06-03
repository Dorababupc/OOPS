#include<iostream>
using namespace std;
class complex{
    public:
    int a;
    int b;
    complex(){
        a=0;
        b=0;
    }
    complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    complex add(complex f){
        complex temp;
        temp.a=a+f.a;
        temp.b=b+f.b;
        return temp;
    }
    complex operator-(complex f){
        complex temp;
        temp.a=a+f.a;
        temp.b=b+f.b;
        return temp;
    }
};
int main(){
   complex a(1,5);
   complex b(5,6);
   complex c=a.add(b);
   //Here we have just created a function add inside the class to do this addition operation.
   cout<<c.a<<endl;
   complex d;
   d=a-b;
   cout<<d.b<<endl;
   //The same opeatation can be done using opeator- as function name but no need to use ".operator"
}
