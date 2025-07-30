//insert an element in a sorted stack

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st,int n){
    // NOTE ::: dont forget to add st.empty() in base case
    if(st.empty() || n > st.top()){
        st.push(n);
        return;
    }
     int k=st.top();
    st.pop();
    solve(st,n);
    st.push(k);


}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    solve(st,200);

     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}