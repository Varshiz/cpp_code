// Kth greatest and smallest element 

// 1 2 3 4 5 6 7 8 

#include<bits/stdc++.h>
using namespace std;

 int kthMaximum(int arr[],int size,int k){
     priority_queue<int,vector<int>,greater<int>>pq;
     for(int i=0;i<k;i++){
        pq.push(arr[i]);

     }

     for(int i=k;i<size;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
     }
     return pq.top();

 }


 int kthMinimum(int arr[],int size,int k){
     priority_queue<int>pq;
     for(int i=0;i<k;i++){
        pq.push(arr[i]);

     }

     for(int i=k;i<size;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
     }
     return pq.top();

 }


int main(){
    int arr[]={4,2 ,1 ,3 ,5 ,7 ,6 ,8};
    int size=8;
    int k=2;

    int KthMaxi=kthMaximum(arr,size,k);
    int KthMini=kthMinimum(arr,size,k);

    cout<<"Kth Smallest Element is : "<<KthMini<<endl;

    cout<<"Kth Greatest Element is : "<<KthMaxi<<endl;

}