//house robber problem
#include <bits/stdc++.h>
using namespace std;
int maxadjsum(vector<int>arr,int i,int n,int sum){
    if(i>=n)return 0;

    //exclusion
   int option1= 0+maxadjsum(arr,i+1,n,sum);
    //inclusion
   
   int option2= arr[i]+maxadjsum(arr,i+2,n,sum);
   int ans=max(option1,option2);
   return ans;
    
}
int main(){
    vector<int>arr={2,4,1,6,8,5,9};
    int n=7;
    int sum=0;
    int k=maxadjsum(arr,0,n,sum);
    cout<<k;
}