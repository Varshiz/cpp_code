#include<iostream>
#include<string.h>

using namespace std;

void reverse(char ch[],int size){
    int i=0,j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[10];
    cin.getline(ch,10);
    cout<<"before  "<<ch<<endl;
    
    reverse(ch,strlen(ch));
    cout<<"after  "<<ch;
}
