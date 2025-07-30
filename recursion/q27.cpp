//#include<iostream>
// #include<string>
// #include<math.h>
// using namespace std;
// int main(){
//     string k="abc";
//     int r=(pow(2,k.size())-1);
//     // cout<<r;
//     for(int i=0;i<=r;i++){
//         string p="";
//         for(int l=0;l<k.size();l++){
//             if(i & (1<<l))p+=k[l];
//         }
//         cout<<i<<" "<<p<<endl;
//     }

// }
#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
void k(vector<int>arr,int n,vector<int>&ans,int i,int sum){
   if(i==n){
    // for(int l=0;l<ans.size();l++)cout<<ans[l]<<" ";
    ans.push_back(sum);
    cout<<": sum is "<<sum<<endl;
    return;
   }

k(arr,n,ans,i+1,sum);
ans.push_back(arr[i]);
k(arr,n,ans,i+1,sum+=arr[i]);
ans.pop_back();
}
int main(){
    
    vector<int>arr{1,2,3};
    int n=3;
    int sum=0;
    vector<int>ans;
    k(arr,n,ans,0,sum);
    sort(ans.begin(),ans.end());
// for(auto it:ans)cout<<it<<" ";
for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";

}
