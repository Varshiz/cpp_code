#include<iostream>
using  namespace std;
void prime(int n){
    for(int i=2;i<=n;i++){
        for(int j=2;j<=(i/2);j++){
        if(i%j==0){
            cout<<i<<" not a prime"<<endl;
            break;
        }
       else{
        if (j==(i/2)){cout<<i<<" prime no"<<endl;}
        continue;
       }
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
}