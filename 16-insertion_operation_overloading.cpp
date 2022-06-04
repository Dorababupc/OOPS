#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<"+i"<<imag<<endl;
    }
    // friend void operator<<(ostream &o,complex &c){
    //     o<<c.real<<"+i"<<c.imag<<endl;
    // }
    
    //since it has arguments from two different classes it can't be a member function of the class so i have made it a friend function.
    friend ostream& operator<<(ostream &o,complex &c){
        o<<c.real<<"+i"<<c.imag<<endl;
        return o;
    }
};
int main(){
    complex c(4,5);
    int a=10;
    cout<<a<<endl;
    //Like the printing of a onto the screen we cannot output c to the screen.This is because the cout is not made to handle the user defined data.
    //Let's overload the cout to print this class also.
    c.display();
    //The above statement can be written as .operator<< given function name is  changed.
    cout<<c;
    //parameter1, operator, parameter2.

    //Regarding the return type
    //Now, if i make cout<<c as cout<<c<<endl
    //This will give error , because cout<<c is a function call and <<endl; after function call has no meaning.
    //If this can be cout<<endl; then this can be function call.
    //So, to make cout<<c consider as cout after it's function is called we should return ostream reference from the friend funtion defined above.
    cout<<c<<endl;
}
