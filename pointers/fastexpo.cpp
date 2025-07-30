#include<iostream>
using namespace std;
int fastexpo(int a,int b){
    int ans=1;
    while(b){
        if(b & 1){
            ans= ans*a;

        }
        a=a*a;
        b>>=1;
    }
    return ans;
}
int main(){
    cout<<fastexpo(5,3)<<endl;
}