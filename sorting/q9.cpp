#include<iostream>
using namespace std;
int nearlySortedsearch(int arr[],int n,int target){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid-1]== target && (mid-1)>0 ){
            return mid-1;
        }
        if(arr[mid]== target ){
            return mid;
        }
        if(arr[mid+1]== target && (mid+1)<n ){
            return mid+1;
        }
        if(arr[mid]>target){
            e=mid-2;
        }
         if(arr[mid]<target){
            s=mid+2;
        }
    }
    return -1;
}
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target =300;
    int ans=nearlySortedsearch(arr,n,target);
    if(ans==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at index "<<ans<<endl;
    }
    return 0;
}