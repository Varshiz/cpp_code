#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void print(vector<int> &v){
//   for (int i=0;i<v.size();i++){
//    cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
bool mycomp(vector<int> &a,vector<int> &b){
    return a[1]>b[1];  // decreasing order sorting
    // return a<b;   increasing order sorting 
}


void print(vector<vector<int>>&v){
 for(int i=0;i<v.size();i++){
    vector<int>&temp=v[i];
     int a=temp[0];
       int b=temp[1];
       cout<<a<<" "<<b<<endl;
 }
 cout<<endl;
}



int main(){
    vector<vector<int>> v ={{0,55},{1,22},{0,44},{2,33},{0,11}};
     sort(v.begin(),v.end(),mycomp);
    print(v);
    return 0;
}