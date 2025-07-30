#include<iostream>
#include<string.h>
using namespace std;

bool checkpalindrome(char ch[],int size){
    int i=0,j=size-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
       
    }
     return true;
}


int main(){
    char ch[100];
    cin>>ch;
    int ans=checkpalindrome(ch,strlen(ch));
    cout<<"The ans is "<<ans;
}