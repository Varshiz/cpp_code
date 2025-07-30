#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,76,44,-63,24,-88,96,-2,5};
    int size=10;
     int j=0;
    for(int i=0;i<size;i++){
       
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}