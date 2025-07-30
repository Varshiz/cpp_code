// #include<iostream>
// #include<string.h>
// using namespace std;

// void changeupper(char ch[],int size){
//     int index=0;
//     while(ch[index] != '\0'){
        
//         if(ch[index]>='a' && ch[index]<='z'){
//             ch[index]= ch[index] - 'a' + 'A';
//         }
//         index++;
//     }
// }
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     cout<<"before "<<ch<<endl;
//     changeupper(ch,strlen(ch));
//     cout<<"after "<<ch<<endl;
// }


#include<iostream>
#include<string.h>
using namespace std;

void changeupper(char ch[],int size){
    int index=0;
    while(ch[index] != '\0'){
        
        if(ch[index]=='@' ){
            ch[index]= ch[index] - '@' + ' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"before "<<ch<<endl;
    changeupper(ch,strlen(ch));
    cout<<"after "<<ch<<endl;
}