#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++)
    {
       cout<< "enter the value of "<<i<<" ";
       cin>>arr[i];
    //    cout<<endl; 
    }
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*2;
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
}