//shallow vs deep copy 
//shallow copy is waht we generally make but when there is heap memory used we need to make deep copy so that problems dont occur
//deep copy ex here

#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

// default dumb copy constructor which does shallow copy
// abc(const abc &obj){
//     x=obj.x;
//     y=obj.y;

// }

//smart deep copy constructor
abc(const abc &obj){
    x=obj.x;
    y=new int(*obj.y);

}

    abc(int _x,int _y):x(_x),y(new int(_y)){}
    void print() const{
        printf(" X:%d\n Ptr Y:%p\n content of Y(*y):%d",x,y,*y);
    }
};
int main(){
abc a(1,2);
a.print();

abc b(a);
// abc b=a;
cout<<endl;
*b.y=20;
b.print();
//b.y and a.y points to same location ;
//if u free any one of them the other will lost the location
cout<<endl;
a.print();

return 0;
}