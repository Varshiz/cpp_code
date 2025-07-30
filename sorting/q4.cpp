#include<iostream>
using namespace std;
int missingno(int arr[],int n){
    int s=0,e=n-1;
    int k=-1;
    while(s<=e){
          int mid=(s+e)/2;
        if(arr[mid]-mid==1){
           s=mid+1;
        }
         if(arr[mid]-mid==2){
           e=mid-1;
           k=mid;
        }

    }
  
    int ans=k+1;
      if(ans==0){
        return n+1;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int ans= missingno(arr,n);
    cout<<"missing number is :"<<ans<<endl;
    return 0;
}