// #include<iostream>
// #include<vector>
// using namespace std;
// int checkprime(int n){
//     if(n==0) return 0;
//     vector<bool> k(n,1);
//     k[0]=k[1]=0;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(k[i]==1){
//             ans++;
//             int j=i*2;
//             while(j<n){
//             k[j]=0;
//             j+=i;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if (k[i]==1) {cout<<i<<" ";}

//     }
//     cout<<endl;
//     return ans;

// }
// int main(){
//     cout<<checkprime(20);
// }
  

  ///optimesed code which prints the prime no

#include<iostream>
#include<vector>
using namespace std;
int checkprime(int n){
    if(n==0) return 0;
    vector<bool> k(n,1);
    k[0]=k[1]=0;
    // int ans=0;
    for(int i=0;i*i<n;i++){           // i*i<n
        if(k[i]==1){
            //  ans++;
            int j=i*i;      // starts from i*i as i*2...and others are priviously set to 0;
            while(j<n){
            k[j]=0;
            j+=i;
            }
        }
    }
    for(int i=0;i<n;i++){
        if (k[i]==1) {cout<<i<<" ";}

    }
    cout<<endl;
    return 0;

}
int main(){
    checkprime(20);
}