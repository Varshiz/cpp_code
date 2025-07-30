#include<iostream>
using namespace std;
int solve(int arr[],int size,int index,int &max){
    if(index>=size)return max;

    if(arr[index]>max)max=arr[index];

    solve(arr,size,index+1,max);
    return max;
}

int main(){
    int arr[]={10,30,20,66,11,34,22,51};
    int size=8;
    int index=0;
    int max=INT_MIN;
    cout<<solve(arr,size,index,max);
    return 0;
}
