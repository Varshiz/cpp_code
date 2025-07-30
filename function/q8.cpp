#include<iostream>
using namespace std;
bool checkprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        return false;
    }
    return true;
}
int main(){
bool ans=checkprime(10);
 if(ans){
    cout<<"its a prime number";

 }
 else{
    cout<<"not a prime no.";
 }
}
// void checkprime(int n)
// {
//     for(int i=2;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"not prime"<<endl;
//             break;
//         }
//         else{
//             cout<<"prime";
//             break;
//         }
//     }
// }
// int main(){
//     checkprime(6);
//     return 0;
// }