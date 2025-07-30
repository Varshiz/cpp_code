#include<iostream>
using namespace std;
bool isSorted(int arr[],int size,int index){
    if(index>=size)return true;

    if(arr[index]>arr[index-1]){
       return isSorted(arr,size,index+1);
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={26,36,46,56,66,76};
    int size=6;
    int index=1;
    bool k=isSorted(arr,size,index);
    if(k) cout<<"The Array is sorted"<<endl;
    else cout<<"Array is not sorted"<<endl;
    return 0;
}