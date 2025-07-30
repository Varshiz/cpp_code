//reverse a stack using recursion

#include<iostream>
#include<stack>
using namespace std;
 
 void insertatBottom(stack<int>&st,int &a){
     if(st.empty()){
              st.push(a);
              return;

     }

     int b=st.top();
     st.pop();
     insertatBottom(st,a);
     st.push(b);

 }


void solve(stack<int>&st){
    if(st.empty())return;

    int a=st.top();
    st.pop();
    solve(st);
    insertatBottom(st,a);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //  while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    cout<<endl;
    int s=st.size();

    solve(st);
// cout<<st.size();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}