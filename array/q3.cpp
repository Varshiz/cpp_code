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
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<5;i++)
    {
     sum=sum+arr[i];
    }
    cout<<sum;
}