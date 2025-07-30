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


void sortStack(stack<int>&st){
    if(st.empty())return;
    
    int n=st.top();
    st.pop();
    sortStack(st);
    solve(st,n);

}

int main(){
    stack<int>st;
    st.push(63);
    st.push(21);
    st.push(39);
    st.push(99);
    st.push(50);

    sortStack(st);

    // solve(st,200);

     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}