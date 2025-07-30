// sum of min and max elements of all subarrays of size k
// good question
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>arr={2,5,-1,7,-3,-1,-2};
  int n=arr.size();
  int k=4;

  deque<int>mini;
  deque<int>maxi;

  for(int i=0;i<k;i++){
    while(!maxi.empty() && arr[i]>=arr[maxi.back()])maxi.pop_back();
    while(!mini.empty() && arr[i]<=arr[mini.back()])mini.pop_back();

    maxi.push_back(i);
    mini.push_back(i);


  }

  int ans=0;

  ans+=(arr[maxi.front()]+arr[mini.front()]);
//   cout<<ans<<" ";
 cout<<arr[mini.front()]<<" ";
  for(int i=k;i<n;i++){
    if(!maxi.empty() && i-maxi.front()>=k)maxi.pop_front();
    if(!mini.empty() && i-mini.front()>=k)mini.pop_front();


     while(!maxi.empty() && arr[i]>=arr[maxi.back()])maxi.pop_back();
    while(!mini.empty() && arr[i]<=arr[mini.back()])mini.pop_back();

    maxi.push_back(i);
    mini.push_back(i);


    cout<<arr[mini.front()]<<" ";
    ans+=(arr[maxi.front()]+arr[mini.front()]);
    // cout<<ans<<" ";
  }

  cout<<endl<<"Ans is : "<<ans<<endl;

}