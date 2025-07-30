//  Find Median from Data Stream
 //Imp and hard

// {2,13,5,8,6,15,4}:
// 2                   -> 2
// 2,13                -> 7.5
// 2,5,13              -> 5 
// 2,5,8,13            -> 6.5
// 2,5,6,8,13          -> 6
// 2,5,6,8,13,15       -> 7 
// 2,4,5,6,8,13,15     -> 6


//{12,10,8,4,2,3,15}
// 12                                      Median is : 12
// 10,12                                   Median is : 11
// 8,10,12                                 Median is : 10
// 4,8,10,12                               Median is : 9
// 2,4,8,10,12                             Median is : 8                                    
// 2,3,4,8,10,12                           Median is : 6
// 2,3,4,8,10,12,15                        Median is : 8

#include<bits/stdc++.h>
using namespace std;

void solveforMedian(int arr[],int element,float &median,priority_queue<int>&maxi,priority_queue<int,vector<int>,greater<int>>&mini){
    if(maxi.size()==mini.size()){
        if(element > median){
            mini.push(element);
            median=mini.top();
        }
        else{
            maxi.push(element);
            median=maxi.top();
        }
    }
    else if(maxi.size()==(mini.size()+1)){
        if(element > median){            
            mini.push(element);
        }
        else{
            int maxiTop=maxi.top();
            maxi.pop();
            mini.push(maxiTop);
            maxi.push(element);
        }

        median=(maxi.top()+mini.top())/2.0;
    }
    else if(maxi.size()+1==mini.size()){
        if(element > median){
            int miniTop=mini.top();
            mini.pop();
            maxi.push(mini.top());
            mini.push(element);
        }
        else{
            maxi.push(element);
        }
        median=(maxi.top()+mini.top())/2.0;
    }

    
}



int main(){
   int arr[]={12,10,8,4,2,3,15};
   int n=7;
   float median =0;

   priority_queue<int,vector<int>,greater<int>>mini;
   priority_queue<int>maxi;

   for(int i=0;i<n;i++){
    int element=arr[i];
      solveforMedian(arr,element,median,maxi,mini);
      cout<<"Median is : "<<median<<endl;
   }

  

}