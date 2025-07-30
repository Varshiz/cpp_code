//const keyword

#include<iostream>
using namespace std;
int main(){
//   const int *a=new int(2); // CONST data,NON_CONST pointer
// // const int *a=new int(2); //same as above line
//   cout<<*a<<endl;

// // not possible as we cant change the content of pointer
// //   *a=20;

// int b=20;
// a=&b;  // pointer itself can br reassigned
// cout<<*a<<endl;



//CONST pointer,But NON_CONST data
// int *const a=new int(9);
// cout<<*a<<endl;
// *a=65; 
// cout<<*a<<endl;


//CONST data and CONST pointer
const int *const a=new int(7);
cout<<*a;
  


}