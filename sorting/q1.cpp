#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    
    int k;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==target){
            e=mid-1;
            k=mid;
        }
        else if(target > arr[mid]){
            s=mid+1;
        }
        else if(target < arr[mid]){
            e=mid-1;
        }
    }
    return k;
}
int main(){
    int arr[]={10,30,30,30,30,60,70,80,90};
    int target=30;
    int n=9;

    int ansIndex= firstoccurance(arr,n,target);
    if(ansIndex== -1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at index: "<<ansIndex<<endl;

    }
    return 0;
    
}