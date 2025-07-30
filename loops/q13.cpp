#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int g=0;g<i;g++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            if(j==0||j==n-i-1){
        cout<<"* ";
            }
        else {
        cout<<"  ";
        }
        }
        cout<<endl;
    }
}