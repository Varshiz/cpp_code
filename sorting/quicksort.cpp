#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int l,int h){
int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j){
        while(arr[i]<=pivot && i<=h-1)i++;
        while(arr[j]>pivot && j>=l+1)j--;
if(i<j)swap(arr[i],arr[j]);

    }
    swap(arr[l],arr[j]);
    return j;
}
void qs(vector<int> &arr,int l ,int h){
    
    if(l<h){
        int pindex=partition(arr,l,h);
       qs(arr,l,pindex-1);
       qs(arr,pindex+1,h);
    }
 
}
int main(){
   vector< int >arr={4,6,2,5,7,9,1,3};
    int n=8;
    int low=0;
    int high=n-1;
    qs(arr,low,high) ;
    // for(auto it:arr)cout<<it<<" ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}