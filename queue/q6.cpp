//interleave a queue

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    // q.push(80);
    
    queue<int>temp;
    int n=q.size()/2;
    bool p=q.size()%2;
    while(n--){
        int a=q.front();
        temp.push(a);
        q.pop();
    }

    n=temp.size();
    while(n--){
        q.push(temp.front());
        temp.pop();
        q.push(q.front());
        q.pop();
    }

if(p){
    q.push(q.front());
        q.pop();
}
     while(!q.empty()){
         int ele=q.front();
         q.pop();
         cout<<ele<<" ";
    }
    
}