// head recursion : as function me recursion call processing se pehle ho raha h


#include<iostream>
using namespace std;
void printcounting(int n){
    // base case
          if(n==1){
            cout<<1<<endl;
            return;
          }

    // recursive call   
         printcounting(n-1);


    // processing
          cout<<n<<endl;


         
}
int main(){
    int n;
    cin>>n;
   printcounting(n);
    return 0;
}