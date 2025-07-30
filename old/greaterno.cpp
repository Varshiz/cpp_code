#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    if(a>b){
        cout<<"the value of a is greater"<<endl;
    }
    else if(a<b){
        cout<<"the value of b is greater"<<endl;
    }
    else {
        cout<<"a is equal to b"<<endl;
    }
}
