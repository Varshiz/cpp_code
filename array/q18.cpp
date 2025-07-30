#include<iostream>
using namespace std;
int pairsum(int arr[],int n){
    for(int i=0;i<n-1;i=i+2){
        cout<<arr[i]+arr[i+1]<<" ";
    }
}
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int n=8;
pairsum(arr,n);
}