#include<iostream>
using namespace std;
int powerof2n(int n){
    if(n==0)return 1;
    
    int ans=2*powerof2n(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k=powerof2n(n);
    cout<<k;
    return 0;
}