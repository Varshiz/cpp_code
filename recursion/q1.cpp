#include<iostream>
using namespace std;
int factoriall(int n){
    if(n==1 || n==0){
        return 1;

    }
   int recursionkaans=factoriall(n-1);
   int finalans=n*recursionkaans;
   return finalans;

}
int main(){
    int n;
    cin>>n;
    int m=factoriall(n);
    cout<<m<<endl;
    return 0;
}