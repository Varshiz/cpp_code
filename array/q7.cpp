#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        if(arr[i]==0){
           zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<endl<<one<<endl<<zero;
}
int main(){
  int arr[10]={0,0,0,0,0,0,1,1,0,1};
  int size=10;
  printarray(arr,size);
  
}