#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;


    while(n>0){
        int bit=(n&1);
        if(bit==1){
        m++;}
        n=(n>>1);

    }


//   while(n>0){
//        int bit=(n%2);
//       if(bit==1){
//         m++;
//      }
//          n= (n/2);
//    }
   
   
    // for(int i=1;i<n+1;i=(i<<1)){
    //     if((n&i) != 0){
    //         cout<<(n&i)<<endl;
    //            m++;
    //         //    cout<<i<<endl;
    //     }
    // }
    cout<<m;
}