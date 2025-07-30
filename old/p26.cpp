#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int num=1;
    while(i<=n){
       int gap=n-i;
       while(gap){
        cout<<" ";
        gap=gap-1;
       }
       int j=1;
       while(j<=i){
        cout<<num;
        j=j+1;
        num=num+1;
       }
       cout<<endl;
       i=i+1;
    }
}