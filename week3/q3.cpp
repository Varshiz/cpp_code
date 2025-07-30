#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool k=0;
    for(int i=1;i<=n;i++){
        if(k==0){
        if(i%3==1)cout<<"*"<<endl;
        if(i%3==2)cout<<" *"<<endl;
        if(i%3==0){cout<<"  *"<<endl;k=1;
        }} 
        if(k==1){
        if(i%3==1)cout<<" *"<<endl;
        if(i%3==2){cout<<"*"<<endl;k=0;
        // if(i%3==0){cout<<"  *"<<endl;k=0;
        } }
    }
    return 0;
}
