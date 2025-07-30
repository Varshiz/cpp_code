#include<iostream>
using namespace std;
void prime(int n){
    for(int j=2;j<=n;j++){
    for(int i=2;i<=j/2;i++)
    {           
        if(j%i==0){
            cout<<j<<" not a prime no."<<endl;
            break;
        }
        else{
           if(i==j/2){
            cout<<j<<" is prime"<<endl;
           }
        
            continue;}
        }
        // cout<<j<<" is prime"<<endl;
    }
    cout<<endl;
    }

int main(){
    prime(8);
    return 0;
}