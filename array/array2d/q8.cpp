#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size= v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(13);
    v.push_back(15);
    v.pop_back();
    vector<int>brr(v);
    v.clear();
     v.push_back(51);
    v.push_back(71);
    v.push_back(91);
    print(v);
    vector<int>arr(5,2);
    print(arr);
    print(brr);
    cout<<brr.empty()<<endl;
    vector< vector<int> > crr(5,vector<int>(3,6));
    for(int i=0;i<crr.size();i++){
        for(int j=0;j<crr[i].size();j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}
