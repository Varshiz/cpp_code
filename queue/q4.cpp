// reverse a queue using recursion

#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>&q){
    if(q.empty())return;

    int a=q.front();
    q.pop();
    reverseQueue(q);
    q.push(a);
}


int main(){
    queue<int>q;
     q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    
    reverseQueue(q);

    while(!q.empty()){
         int ele=q.front();
         q.pop();
         cout<<ele<<" ";
    }
}