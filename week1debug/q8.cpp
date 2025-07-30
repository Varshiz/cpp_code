#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<((2*i)+1);j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //  int k=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<k<<" ";
    //         k++;
    
    //     }
      
    //     cout<<endl;
    // }


    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
                
            
        }
        cout<<endl;
    }
}