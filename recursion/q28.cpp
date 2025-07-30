#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
void  k(vector<int>&arr,vector<int>&ds ,vector<vector<int>>&ans,int ind){
    

    if(ind==arr.size()){
        // cout<<ind<<" ";
        
        return;       
        
        // cout<<ind<<" ";
    }
  
       ds.push_back(arr[ind]);   

        k(arr,ds,ans,ind+1);
        ans.push_back(ds);
        
        ds.pop_back();

}
void substring(vector<int>&arr,vector<int>&ds ,vector<vector<int>>&ans){
    for(int i=0;i<arr.size();i++){
        k(arr,ds,ans,i);
    }
}
int main(){
    vector<int>arr{1,2,3};
    vector<int>ds;
    vector<vector<int>>ans;
    substring(arr,ds,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
// cout<<arr[0];
}