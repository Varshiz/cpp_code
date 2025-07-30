#include<iostream>

using namespace std;
void rowsum(int arr[4][4],int row,int col){
   
 
    for(int i=0;i<row;i++){
         int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
            }
            cout<<"sum of row "<<i<<":"<<sum<<endl;
        }
        cout<<endl;
        
    }
     
 void colsum(int arr[4][4],int row,int col){
   
 
    for(int i=0;i<col;i++){
         int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
            }
            cout<<"sum of col "<<i<<":"<<sum<<endl;
        }
        cout<<endl;
        
    }
     
 void diagoanlsum(int arr[4][4],int row,int col){
   
     int sum=0;
     for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
     }
     
    // for(int i=0;i<col;i++){
         
    //     for(int j=0;j<row;j++){
    //         if(i==j){
    //         sum=sum+arr[j][i];}
    //         }
          
    //     }
          cout<<"sum of diagoanl: "<<sum<<endl;
        
    }

    void reversediagonalsum(int arr[4][4],int row,int col){
     int sum=0;
 
    for(int i=0;i<row;i++){
         
        for(int j=0;j<col;j++){
            if(i+j==3){
            sum=sum+arr[i][j];
            }
            }
            
        }
        cout<<"sum of reverse diagonal: "<< sum <<endl;
        
        
    }

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {11,22,33,44},
        {21,31,41,51},
        {5,6,7,8}
        
    };
    int row=4;
    int col=4;
    
    // rowsum(arr,row,col);
    // colsum(arr,row,col);
    diagoanlsum(arr,row,col);
    reversediagonalsum(arr,row,col);
    
    return 0;
}