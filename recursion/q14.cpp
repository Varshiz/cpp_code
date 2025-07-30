#include<iostream>
using namespace std;
int solve(int arr[],int size,int index,int target){
    if(index>=size)return -1;
    if(arr[index]==target)return index;
    int k=solve(arr,size,index+1,target);
    return k;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    int index=0;
    int target=30;
    
    cout<<solve(arr,size,index,target);
    return 0;
}