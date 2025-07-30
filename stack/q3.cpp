//stack gives everthing in reverse 

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char>st;

    string p="Modi";

    for(int i=0;i<p.size();i++){
        char a=p[i];
        st.push(a);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }


}
