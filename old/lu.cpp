#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"the value of ch is"<<endl;
cin>>ch;
if(ch>='a' &&ch<='z'){
 cout<<"this is lowercase"<<endl;}
else if(ch<='Z' && ch>='A'){
 cout<<"this is uppercase";}
else if  (ch>='0' && ch<='9')
{
 cout<<"numeric"<<endl;

}
return 0;

    
}
