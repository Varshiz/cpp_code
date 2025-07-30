#include<iostream>
using namespace std;
void printsum(int n)
{
    int sum=0;
    for(int i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    cout<<"sum is : "<<sum<<endl;
}
int main(){
    printsum(40);
}