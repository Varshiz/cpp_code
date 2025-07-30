// u are given n posts and k colors.no of ways such that more than two adjacent posts cannot have same color;
// Painting Fence Algorithm
// Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color. 

#include <bits/stdc++.h>
using namespace std;
int f(int n,int k){
    if(n==1)return k;
    if(n==2)return k+k*(k-1);

    int ans=(k-1)*(f(n-1,k)+f(n-2,k));
    return ans;
}
int main(){
    int n=3;
    int k=3;
    cout<<f(n,k);

}





//waste code
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int x,int y){
//     if(x==0 && y==0){
//         // ans+=1;
//         return 0;
//     }
//     if(x<0 || y<0)return INT_MAX;
    
//     int a=1+solve(x-3,y-2);
//     int b=1+solve(x-2,y-3);
//     return min(a,b);
// }
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int x,y;
//     cin>>x;
//     cin>>y;
//    // if ((x - 2) % 5 == 0 && (y - 3) % 5 == 0) {
//    //      long long moves = max((x - 2) / 5, (y - 3) / 5) + 1;
//    //      cout << moves << endl;
//    //  } else {
//    //      cout << -1 << endl;
//    //  }
//     int ans=solve(x,y);
//     cout<<ans<<endl;
//     return 0;
// }




