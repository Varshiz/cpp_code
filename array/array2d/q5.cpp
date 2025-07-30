#include<iostream>
#include<limits.h>
using namespace std;
int max(int arr[3][4],int row,int col){
    int max=INT_MIN;
 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
               max=arr[i][j];
            }
        }
        
    }
     cout<<"the maximum no is: ";
      return max;
     
     }
int min(int arr[3][4],int row,int col){
    int min=INT_MAX;
 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
               min=arr[i][j];
              
            }
        }
      
    }
     cout<<endl;
    cout<<"the minimum no is: "; 
    return min;  
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {11,22,33,44},
        {21,31,41,51}
        
    };
    int row=3;
    int col=4;
    
    cout<<max(arr,row,col);
    cout<<min(arr,row,col);
    return 0;
}