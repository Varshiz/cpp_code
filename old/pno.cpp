#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
  /*  int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;*/
    if(a>0){
        cout<<"the value of a is positive"<<endl;
    }
    else if(a<0){
        cout<<"the value of a is negative"<<endl;
    }
    else {
        cout<<"a is equal to 0"<<endl;
    }
}