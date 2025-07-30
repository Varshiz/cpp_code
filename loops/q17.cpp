#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*i+1;j++)
        {
            if(j%2==0)
            {
                cout<<i+1;
              
            }
            else
            {
                  cout<<"*";
            }
        }
        
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=2*i;j>=0;j--)
        {
            if(j%2==0)
            {
                cout<<i+1;
              
            }
            else
            {
                  cout<<"*";
            }
        }
        cout<<endl;
    }
}