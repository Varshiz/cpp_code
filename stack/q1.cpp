//Basics

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);


    //size
    cout<<"size is "<<st.size()<<endl;


    //deletion
    st.pop();

    //check empty
    if(st.empty())cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;

    //top element
    cout<<"top element is "<<st.top()<<endl;

    


}
