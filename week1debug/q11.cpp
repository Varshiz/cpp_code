#include<iostream>
using namespace std;
int main(){
    int digit;
    cin>>digit;
  int n;
  int count = 0 ;
  while(digit){
     cin>>n;
     count = (count*10) + n;
    digit--;
  }
   cout<<count<<endl;
}