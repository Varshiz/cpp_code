//next smaller element

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmall(int arr[],int size,vector<int>&ans){
    stack<int>st;
       st.push(-1);
    for(int i=size-1;i>=0;i--){
        int a=arr[i];

        while(st.top()>=a)st.pop();
        
        ans[i]=st.top();
        st.push(a);

    }
    return ans;
}

int main(){
    int arr[5]={2,6,8,9,3};
    int size=5;
    vector<int>ans(size);
    nextSmall(arr,size,ans);
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}