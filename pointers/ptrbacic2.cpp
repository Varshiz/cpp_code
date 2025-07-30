#include<iostream>
using namespace std;

void solve(int arr[],int size){
    cout<<"solve wla "<<arr<<endl;
    
    cout<<"solve wla2 "<<&arr<<endl;

    *arr=*arr+1;
}

int main(){
    int arr[3]={10,20,30};
    int s=3;
    
    cout<<arr<<endl;
    cout<<&arr<<endl;

    solve(arr,s);
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    // }
}