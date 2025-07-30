#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int gap=1;
        while(gap<=i)
        {
            cout<<" ";
            gap=gap+1;
        }
        int j=n;
        
        while(j>=i)
        {
            cout<<i;
            j=j-1;
        }
        cout<<endl;
        i=i+1;

    }
}