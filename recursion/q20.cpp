#include<iostream>
using namespace std;
int binarysearching(int arr[],int start,int end,int target){

     if(start>end)return -1;

    int mid=start+(end-start)/2;
   
    if(arr[mid]==target)return mid;

    if(arr[mid]<target) return binarysearching(arr,mid+1,end,target);
    else return binarysearching(arr,start,mid-1,target);
    
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,92};
    int size=10;
    int start=0;
    int end=size-1;
    int target=50;
    // int mid=(start+end)/2;
cout<<binarysearching(arr,start,end,target);

}