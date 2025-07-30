#include<iostream>
using namespace std;
void print(int arr[],int size,int index,int target){
    if(index>=size)return ;
    if(arr[index]==target)cout<<index<<" ";
    print(arr,size,index+1,target);
}
int main(){
    int arr[]={10,20,10,10,30,40,10,60};
    int size=8;
    int target =10;
    int index=0;
    print(arr,size,index,target);
    return 0;
}