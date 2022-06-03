#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    int get(){
        return b;
    }
    friend complex operator+(complex a,complex b);
};
//The friend function's is the function which can access the private members of the class.
//It's prototype is written inside the class but this is not consdiered as a member funcion of the class.
//so, that's why wher we are defining it outside the class, we don't give scope resolurion.
complex operator+(complex a,complex b){
    complex temp;
    temp.a=a.a+b.a;
    temp.b=a.b+b.b;
    return temp;
}
int main(){
   complex a(1,5);
   complex b(5,6);
   complex c=a+b;
   cout<<c.get()<<endl;
}
