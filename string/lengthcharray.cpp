#include<iostream>
#include<string.h>
using namespace std;

int findlength(char ch[],int size){
    
    int index=0;
    while(ch[index] != '\0'){
        
        index++;
    }
    // int len=0;
    // for(int i=0;i<size;i++){
    //     if(ch[i]=='\0'){
    //         // ruk jao
    //         break;
    //     }
    //     else{
    //         len++;
    //     }
    // }
    return index;
}


int main(){
    char ch[100];
    // cin>>ch;
    cin.getline(ch,100);
    int length = findlength(ch,100);
    
    cout<<"the length is: "<<length<<endl;
      

    // predifined funtion  strlen()
    cout<<"printing length- "<<strlen(ch)<<endl;
  
}  