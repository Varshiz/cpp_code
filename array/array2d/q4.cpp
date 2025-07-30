#include<iostream>
using namespace std;
int printing(int arr[3][4],int row,int col){
   cout<<"rowise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"columnwise"<<endl;

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {11,22,33,44},
        {21,31,41,51}
        
    };
    int row=3;
    int col=4;
    printing(arr,row,col);
}