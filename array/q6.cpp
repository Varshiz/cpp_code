#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]== target){
            return true;
        }
    }
    return false;
}
int main(){
  int arr[5]={2,4,6,8,10};
  int size=5;
  int target = 8;
  printarray(arr,size);
  
  bool ans=linearsearch(arr,size,target);
  if (ans==true){
    cout<<"target found";
  }
  else cout<<"not found";
}