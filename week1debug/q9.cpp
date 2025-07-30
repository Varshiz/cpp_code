#include<iostream>
using namespace std;
int prime(int n){
   
for(int i=2;i<n;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            cout<<i <<" is not a prime "<<endl;
              continue; 
        }
           cout<<i <<" is a prime"<<endl;
      
    }
 
}
}
int main(){
    int n;
    cin>>n;
    // int k=1;
    // for(int i=1;i<=n;i++){
    //     k=k*i;
    // }
    // cout<<k;
    int ans=prime(n);
    cout<<ans;
 
}