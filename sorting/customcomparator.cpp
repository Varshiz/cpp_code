#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v){
  for (int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
  }
  cout<<endl;
}
bool mycomp(int &a,int &b){
    return a>b;  // decreasing order sorting
    // return a<b;   increasing order sorting 
}



int main(){
    vector<int> v = {5,4,2,-3,6,8,0,9,7,7,2,1};
     sort(v.begin(),v.end(),mycomp);
    print(v);
    return 0;
}