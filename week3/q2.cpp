#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>=m && (n-m)%2==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
    return 0;
}
