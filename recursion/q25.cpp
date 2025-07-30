#include<iostream>
using namespace std;

bool checkPalindrome(string k,int a,int b){
    if(a>=b)return true;

    if(k[a]!=k[b]){
       return false;
    }
    else return checkPalindrome(k,a+1,b-1);

    
}

int main(){
    string k="racecar";
    int a=0;
    int b=k.size()-1;
    if(checkPalindrome(k,a,b))cout<<"Palindrome ";
    else cout<<"not a palindrome";
}