// no.of dearrangements possible that is for an array of size n ,no of arrangements such that no-one is at their correct place;
#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==1)return 0;
    if(n==2)return 1;
   int ans=(n-1)*(solve(n-1)+solve(n-2));
    return ans;
}
int main(){
    int n=4;
    int ans=solve(n);
    cout<<ans;
}