#include<iostream>
using namespace std;
int findOddoccuring(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(mid & 1){
               if(arr[mid]==arr[mid-1] && (mid-1)>0){
                s=mid+1;
               }
               else{
                e=mid-1;
               }
        }
        else{
            if(arr[mid]==arr[mid+1] && (mid+1)<n){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={2,2,3,3,6,6,7,7,8,9,9};
    int n=12;
    int ans=findOddoccuring(arr,n);
    if(ans==-1){
        cout<<"not found";
    }
    else cout<<"odd occuring element is "<<arr[ans];
}