//operator overloading



#include<iostream>
using namespace std;
 class hello{

    int x,y;

    public:
    hello(int x,int y):x(x),y(y){}

    void print(){
        cout<<x<<" "<<y<<endl;
    }

    void operator+(const hello &src){
        this->x+=src.x;
        this->y+=src.y;

    }

 };
 int main(){
    hello a(2,3);

    hello b(3,4);

    a+b;
    a.print();
    


 }