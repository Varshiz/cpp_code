#include<iostream>
using namespace std;
void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
     fact=fact*i;
     
    }
 cout<<"the factorial of the given numbers is: "<<fact<<endl;   
}
int main(){
    factorial(5);
    return 0;
}