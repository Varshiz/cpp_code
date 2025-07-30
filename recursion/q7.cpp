#include<iostream>
using namespace std;
void printarr(int arr[],int size,int index){
    if(index>=size)return;
         cout<<arr[index]<<" ";
        
         printarr(arr,size,index+1);

}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    printarr(arr,size,index);
return 0;
}