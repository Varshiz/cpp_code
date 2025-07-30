#include<iostream>
using namespace std;

void solve(int arr[],int size,int start,int end){
    if(end==size){
        
        return;
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }

   cout<<endl;
    solve(arr,size,start,end+1);



}


void solve1(int arr[],int size){
    for(int start=0;start<size;start++){
        int end=start;
        solve(arr,size,start,end);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
   
    int size=5;
    
    solve1(arr,size);
}