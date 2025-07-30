#include<iostream>
using namespace std;
void extremeprint(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left]<<" ";
        }
        else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";}
        left++;
        right--;
    }
    // for(int left=0,right=size-1;left<=right;left++,right--){
    //     swap(arr[left],arr[right]);
    // }
//     for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";}
 }
int main(){
  int arr[5]={2,4,6,8,10};
  int size=5;
//   printarray(arr,size);
extremeprint(arr,size);
}