#include<iostream>
using namespace std;
void revers(int arr[],int size){
  
   for(int left=0,right=size-1;left<=right;left++,right--){
    swap(arr[left],arr[right]);
   }
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[6]={2,4,6,8,10,12};
    int size=6;
    revers(arr,6);
}