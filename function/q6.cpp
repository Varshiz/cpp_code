#include<iostream>
using namespace std;
void printsum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is : "<<sum<<endl;
}
int main(){
    printsum(10);
}