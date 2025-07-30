#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int i=1;
   while(i<=n){
    int j=n;
    while(j>=i){
        cout<<n-j+1;
        j=j-1;
    }
    int star=2*i-2;
    while(star){
        cout<<"*";
        star=star-1;
    }
   int k=n-i+1;
   while(k>=1){
    cout<<k;
    k=k-1;
   }

   
   cout<<endl;
   i=i+1;
   }
}