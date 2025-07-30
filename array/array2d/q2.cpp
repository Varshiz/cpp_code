#include<iostream>
using namespace std;
int input(int arr[2][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"input the value of "<<i <<" "<<j<<" ";
            
            cin>>arr[i][j] ;
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][4];
    int row=3;
    int col=4;
     input(arr,row,col);
     return 0;
}