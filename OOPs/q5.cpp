//static keyword

#include<iostream>
using namespace std;

class abc{
    public:
  static int x,y;
   
//    abc():x(0),y(2){}
   
   static void print(){
    //no this pointer accessible
    cout<<"i am a static "<<__FUNCTION__<<endl;
    cout<<x<<" "<<y<<endl;
   }


};
int abc::x;
int abc::y;

int main(){
abc obj1;
obj1.x=1;
obj1.y=2;
obj1.print();
abc::print();


abc obj2;
obj2.x=5;
obj2.y=10;
obj1.print();
obj2.print();
abc::print();
}