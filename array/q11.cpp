#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[9]={2,10,11,10,2,13,15,15,13};
    int n=9;
    int finalans= unique(arr,n);
  
    cout<<finalans;
}