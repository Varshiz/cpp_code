#include<iostream>
#include<limits.h>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int findmin(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size;i++){
        minans=min(arr[i],minans);
        //if(arr[i]<minans){
        // minans=arr[i];
        // }
    }

    cout<<minans;
}

int main(){
  int arr[5]={21,44,67,18,110};
  int size=5;
  printarray(arr,size);
  cout<<endl;
findmin(arr,5);
}