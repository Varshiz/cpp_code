#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // if(n%2==0){
        if((n&1)==0){
        cout<<"even";
    }
    else cout<<"odd";
}