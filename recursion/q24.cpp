#include<iostream>
using namespace std;

void reversek(string &k,int m,int n){
    if(m>=n){return ;}

    swap(k[m],k[n]);
    
    reversek(k,m+1,n-1);
}

int main(){
    string k;
    cin>>k;
  int m=0;
  int n=k.length()-1;
  reversek(k,m,n);
    cout<<k;
} 