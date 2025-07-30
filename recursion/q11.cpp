#include<iostream>
#include<vector>

using namespace std;
void solve(int arr[],int size,int index, vector<int> &ans){
if(index>=size)return ;
if(arr[index]%2==0)ans.push_back(arr[index]);
solve(arr,size,index+1,ans);
}
int main(){
    int arr[]={10,21,32,43,54,65,76,89};
    int size=8;
    int index=0;
    vector<int>ans;
    solve(arr,size,index,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    return 0;

}