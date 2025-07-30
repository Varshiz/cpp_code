//MACROS keyword

#include<iostream>
using namespace std;

#define PI 3.1456
#define MAXX(a,b) (a>b?a:b);

int main(){
    int r=10;
    cout<<"area of circle: "<<r*r*PI<<endl;;

    int a=2;
    int b=4;
    int c=MAXX(a,b);
    cout<<c;
}