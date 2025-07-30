#include<iostream>
using namespace std;
int smallest(int arr[],int size,int index,int smalli){
    if(index>=size)return smalli;
    if(arr[index]<smalli)smalli=arr[index];
    int ans=smallest(arr,size,index+1,smalli);
    return ans;
}
int main(){
    int arr[]={40,20,10,23,67,4,93,39};
    int size=8;
    int index=0;
    int smalli=INT_MAX;
    cout<<"the smallest no is "<<smallest(arr,size,index,smalli);
    return 0;
}


///q10 is also same code but different from this