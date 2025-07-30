#include<iostream>
using namespace std;
int pivotelement(int arr[],int n){
    int s=0,e=n-1;
     if(s==e){return s;}
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>arr[mid+1]){
            return arr[mid];
        }
          if(arr[mid]<arr[mid-1]){
            return arr[mid-1];
        }
        if(arr[mid]>arr[s]){
            s=mid+1;
        }
         if(arr[mid]<arr[s]){
            e=mid-1;
        }
       
        
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,7,12,14,16};
    int n=8;
    int ans = pivotelement(arr,n);
    cout<<"pivot element is: "<<ans<<endl;
    return 0;
}