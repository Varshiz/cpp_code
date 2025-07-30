//can constructor be made private??
//yes it can

#include<iostream>
using namespace std ;
class Box{
    int width;
    //ctor:
    Box(int _w):width(_w){};

    public:
    int getWidth()const{
        return width;

    }

    void setWidth(int _val){
        width=_val;
    }

    friend class Boxfactory;

};

class Boxfactory{
    int count;

    public:
    Box getaBox(int _w){
         ++count;
         return Box(_w);
    }
};

int main(){
    Boxfactory jk;
    Box b=jk.getaBox(5);
    cout<<b.getWidth();
    return 0;
}