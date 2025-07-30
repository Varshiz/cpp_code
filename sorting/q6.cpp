#include<iostream>
using namespace std;
int pivotele(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid-1]>arr[mid]){
            return arr[mid-1];
        }
        if(arr[mid]<arr[s]){
            e=mid-1;
        }
        if(arr[mid]>arr[s]){
            s=mid+1;
        }
        if(s==e){return arr[s];}
    }
}
int bsearching(int arr[],int n,int s,int e,int t){
 while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==t){
        return mid;
    }
    else if(arr[mid]>t){
        e=mid-1;
    }
      else if(arr[mid]<t){
        s=mid+1;
    }
    return -1;
 }

   
}
int main(){
    int arr[]={30,40,50,60,70,80,10,20};
    int n=8;
    int ans=pivotele(arr,n);
    cout<<"the pivot element is : "<<ans<<endl;;
    int t=70;
    int finalans;
    if(arr[0]<t<arr[ans]){
        finalans=bsearching(arr,n,0,ans,t);
    }
    else{
         finalans=bsearching(arr,n,ans+1,n-1,t);
    }
    cout<<finalans<<" place found";

}