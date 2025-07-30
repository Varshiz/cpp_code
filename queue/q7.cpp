
#include<bits/stdc++.h>
using namespace std;

void firstNega(int arr[],int n,int k){
    deque<int>q;
    for(int i=0;i<k;i++){
        if(arr[i]<0)q.push_back(i);

    }


    for(int i=k;i<n;i++){
        if(!q.empty()){
            cout<<arr[q.front()]<<" ";
        }
        else cout<<"0 ";
        
       if((i-q.front())>=k)q.pop_front();

        if(arr[i]<0)q.push_back(i);
        
    }

    if(!q.empty()){
            cout<<arr[q.front()]<<" ";
        }
        else cout<<"0 ";




}

int main(){
 int arr[]={2,-5,4,-1,-2,0,5};
 int size=7;
 int k=3;
 firstNega(arr,size,k);

}