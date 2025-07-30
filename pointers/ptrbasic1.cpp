#include<iostream>
using namespace std;
int main(){
int a=5;
// cout<<a<<endl;
// cout<<"address of a "<<a<<endl;
// int* ptr=&a;
// // *ptr = *ptr -2;
// //accesing value stored at address stored in ptr
// cout<< "accessing : "<< ( *ptr)<<endl;


// cout<<"size of ptr = "<<sizeof(ptr)<<endl;


// int * p=&a;
// int *q= p;
// int* r=q;
// p=p+1;
// cout<<&a<<endl;
// cout<<p-1;


// pointer with Arrays .......
// int arr[5]={10,20,30,40,50};
// int* p=arr;
// p=p+1;
// cout<<*(arr+1)<<endl;
// cout<<p<<endl;


// Character array....
// char ch[50]="statement";
// char* p=&ch[0];
// cout<<*(ch+3)<<endl;
// cout<<p+7;

// character ....
char ch='z';
char * cptr=&ch;
cout<<sizeof(cptr)<<endl;;
cout<<ch;






  


// null pointer ....
// int* ptr=0;
// cout<<*ptr;

return 0;
}