//static keyword

#include<iostream>
using namespace std;

class abc{
    public:
   int x;
   int y;
//    abc():x(0),y(2){}
   
   static void print(){
    //no this pointer accessible
    cout<<"i ama a static "<<__FUNCTION__;
   }


};
int main(){
abc obj1;
obj1.print();
abc::print();
}