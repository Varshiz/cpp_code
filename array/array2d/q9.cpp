#include<iostream>
using namespace std;

int sort(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    // for(int i=0;i<n;i++){
    //     if(arr[i]>0 && arr[i+1]<0){
    //       swap(arr[i],arr[i+1]); 
    //       i=0;
    //     }
    // }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[7]={5,-7,88,2,-9,64,-34};
    sort(arr,7);
}