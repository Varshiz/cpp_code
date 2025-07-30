#include<iostream>
using namespace std;
int findingno(int arr[],int size,int index,int find){
    if(index>=size){return 0;}
    if(arr[index]==find)return 100;
    cout<<arr[index]<<  " " ;
    int ans=findingno(arr,size,index+1,find);
  return ans;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int find=60;
    cout<<findingno(arr,size,index,find);
    return 0;
}