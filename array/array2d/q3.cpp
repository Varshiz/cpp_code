#include<iostream>
using namespace std;
bool target(int arr[3][4],int row,int col,int tar){
   cout<<"rowise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==tar){
                cout<<"target found at "<<arr[i][j]<<endl;
                return true;
            }
        }
        cout<<endl;
    }
    cout<<"target not found"<<endl;
    return false;
    
   
}

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {11,22,33,44},
        {21,31,41,51}
        
    };
    int row=3;
    int col=4;
    int tar=42;
    cout<<target(arr,row,col,tar);
}