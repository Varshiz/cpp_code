#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    char ch='A';
    float j=4.7;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"VB"<<endl;

    }
    cout<<pow(4,2)<<endl;
    cout<<sqrt(9)<<endl;
     cout<<min(24,65)<<endl<<max(99,54)<<endl;
    //   cout<<gcd(9,81);
   cout<<toupper(ch)<<endl;
    cout<<floor(j)<<endl<<ceil(j);
    switch(2)
    {
     case 0: if(n<5)cout<<"the value of n is less";
             break;
    
    case 1: if(n>5)
    cout<<"bigger is n";
             break;
    default: cout<<"equal";
    
    };
    
}