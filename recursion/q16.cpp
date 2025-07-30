#include<iostream>
#include<vector>
using namespace std;
void solve(int n, vector<int> &ans){
    if(n<=0)return;
    int k=n%10;
    solve(n/10,ans);
    
    ans.push_back(k);
    
}

int main(){
    int n;
    cin>>n;
    vector <int>ans;
    solve(n,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}