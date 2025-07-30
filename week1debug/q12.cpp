#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=0;n>0 ;i++){
    int k=n%10;
    cout<<"number at "<<i+1<<" position is "<<k<<endl;
    n=(n/10);
   }
}