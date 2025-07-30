#include<iostream>
using namespace std;
int shift2(int arr[],int n){
 int  temp[2]={arr[0],arr[1]};
 for(int i=0;i<n-2;i=i+2){
    arr[i]=arr[i+2];
    arr[i+1]=arr[i+3];
 }
 arr[n-2]=temp[0];
 arr[n-1]=temp[1];
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int n=8;
    shift2(arr,n);
    return 0;

}