//reverse a queue using stack

#include<bits/stdc++.h>
using namespace std;

 void reverseQueue(queue<int>&q){
    stack<int>st;
     while(!q.empty()){
        int frontele=q.front();
        q.pop();
        st.push(frontele);
     }

     while(!st.empty()){
        int ele=st.top();
        st.pop();
        q.push(ele);

     }
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
