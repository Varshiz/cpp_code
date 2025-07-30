#include<iostream>
#include<vector>
using namespace std;


int printvector(vector<int> ques,int size,int index,int &n){
    if(index>=size)return n;
     n=n*10+ques[index];
     printvector(ques,size,index+1,n);
     return n;
}
int main(){
vector<int>ques={2,8,4,1};
int size=ques.size();
int index=0;
int n;
cout<<printvector(ques,size,index,n);
return 0;
}