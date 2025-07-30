// tail recursion : as function ke end me recursion call hua h ///or we can say that processing ke baad ho raha h


#include<iostream>
using namespace std;
void printcounting(int n){
    // base case
          if(n==1){
            cout<<1<<endl;
            return;
          }


    // processing
          cout<<n<<endl;


    // recursive call   
         printcounting(n-1);

         
}
int main(){
    int n;
    cin>>n;
   printcounting(n);
    return 0;
}