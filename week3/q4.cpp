#include<iostream>
#include<vector>
using namespace std;
bool fin(vector<int>arr,int n,int i,vector<int>k,int sum){
    if(i>=n){
    if(sum==2){
        for(auto it:k)cout<<it<<" ";
        cout<<endl;
        return true;
    }
    
    return false;
    }
    if(fin(arr,n,i+1,k,sum))return true;
    k.push_back(arr[i]);
    sum+=arr[i];
    if(fin(arr,n,i+1,k,sum))return true;
    return false;
}

int main(){
    vector<int>arr={1,2,3,1};
    int n=4;
    int i=0;
    vector<int>k;
    int sum=0;
    fin(arr,4,i,k,sum);
    // cout<<n;
}