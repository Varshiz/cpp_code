//check whether redundant brackets is present or not in given string

#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string s){
stack<char>st;
for(int i=0;i<s.size();i++){
    
    if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' ){
        st.push(s[i]);
    }

    else if(s[i]==')'){
        int operatorCount=0;
        while(!st.empty() && st.top()!='('){
              operatorCount++;
              st.pop();
        }
        st.pop();

        if(operatorCount==0)return true;
    }
}
return false;
}

int main(){
    
    string s="(((a+b)*(c-d)))";
    bool ans=checkRedundant(s);

    if(ans)cout<<"The Given string is Redundant"<<endl;
    else cout<<"Non - Redundant"<<endl;
    return 0;
}