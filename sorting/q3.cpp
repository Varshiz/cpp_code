#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int t){ int s=0,e=n-1;
  
    int k;
    while(s<=e){
         int mid=(s+e)/2;
        if(arr[mid]==t){
            k=mid;
            e=mid-1;
        }
        else if(t> arr[mid]){
            s=mid+1;

        }
        else if(t<arr[mid]){
            e=mid-1;
            
        }
    }
    int min=k;
    return min ;
    }
    int lastocc(int arr[],int n, int t){
        int s1=0,e1=n-1;
    int k1;
     while(s1<=e1){
         int mid=(s1+e1)/2;
        if(arr[mid]==t){
            k1=mid;
            s1=mid+1;
        }
        else if(t> arr[mid]){
            s1=mid+1;

        }
        else if(t<arr[mid]){
            e1=mid-1;
            
        }
    }
    int max=k1;
    return k1;
    }
int totalrepeat(int arr[],int n,int t){
   

   int ans = lastocc(arr,n,t)-firstocc(arr,n,t)+1;
    return ans;
}
int main(){
    int arr[]={10,20,30,30,30,30,30,40,50,50};
    int n=10,t=30;
   int ans= totalrepeat(arr,n,t);
   cout<<"total no. of repeatations= "<<ans<<endl;
   return 0;
}