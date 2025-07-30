// reverse a queue upto k elements

#include<bits/stdc++.h>
using namespace std;


void rev(queue<int>&q,int k){
    stack<int>st;
     int n=q.size();
    int nn=n-k;

   if(k>=n || k==0)return;

    while(k--){
        int w=q.front();
        st.push(w);
        q.pop();
    }

    while(!st.empty()){
        int w=st.top();
        q.push(w);
        st.pop();
    }

    //dont forget to do this
    //pop and push first (n-k)elements into queue 
    while(nn--){
        int a=q.front();
        q.pop();  
        q.push(a);
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
    int k=4;
    
    rev(q,k);
   

    while(!q.empty()){
         int ele=q.front();
         q.pop();
         cout<<ele<<" ";
    }
}