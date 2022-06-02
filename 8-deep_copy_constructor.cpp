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
    Rectangle(Rectangle &r){
         length=r.length;
         breadth=new int[5];
         for(int i=0;i<5;++i){
             breadth[i]=r.breadth[i];
         }
    }
   void show_data(){
       for(int i=0;i<5;++i){
           cout<<breadth[i]<<endl;
       }
   }
};
int main(){
    Rectangle r;
    Rectangle a(r);
    
    r.show_data();
    a.show_data();
    //so, if we don't write it in deep then ambiguity is created and wrong memory errors occurs.
    //so, we need to deinfe a custom deep constructor to allocate copy of memory location in the heap section is involved.
    cout<<endl;
    cout<<endl;
    r.breadth[1]=0;
    r.show_data();
    a.show_data();
    //so,here we have taken care of minute things so that no problem in the dynamically allocated memory location.
    //This is called deep conpy constructor.
}