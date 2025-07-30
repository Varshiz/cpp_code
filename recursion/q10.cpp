#include<iostream>
using namespace std;
void smallest(int arr[],int size,int index,int &mini){
    if(index>=size)return;
    // if(arr[index]<smalli)smalli=arr[index];
    mini=min(arr[index],mini);
    smallest(arr,size,index+1,mini);
    
}
int main(){
    int arr[]={40,20,10,23,67,4,93,39};
    int size=8;
    int index=0;
    int mini=INT_MAX;
    smallest(arr,size,index,mini);
    cout<<"the smallest no is "<<mini<<endl;
    return 0;
}