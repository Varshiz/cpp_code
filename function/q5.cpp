#include<iostream>
using namespace std;
void checkeven(int n)
{
    if((n|1) > n)
    {cout<<"even";}
    else {cout<<"odd";}
}
// void checkeven(int n)
// {
//     if(n%2==0){
//         cout<<"the number n is even"<<endl;
//     }
//     else{
//         cout<<"the number n is odd"<<endl;
//     }
// }
int main()
{
    checkeven(7);
    return 0;
    
}