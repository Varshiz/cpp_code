#include<iostream>
#include<string>
#include<vector>
using namespace std;
void finding(string s,int size,int index,vector<char>&ans){
    if(index>=size)return ;
    ans.push_back(s[index]);
    if(s[index]=='a')cout<<index<<" ";
    finding(s,size,index+1,ans);
}
int main(){
string s="babbaratiart";
int size=s.size();
int index=0;
vector<char>ans;
finding(s,size,index,ans);
cout<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;


}