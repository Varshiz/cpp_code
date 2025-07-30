#include<iostream>
using namespace std;
int leftshift(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int n=8;
    leftshift(arr,n);
}