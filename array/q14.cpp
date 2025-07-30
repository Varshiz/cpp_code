#include<iostream>
using namespace std;
int sort(int arr[],int n){
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    int i=0;
    for(i;i<zero;i++){
        arr[i]=0;
    }
    cout<<i;
    for(i;i<n;i++){
        arr[i]=1;
    }
    // while(zero--){
    //     arr[i]=0;
    //     i++;
    // }
    // while(one--){
    //     arr[i]=1;
    //     i++;
    // }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
}
int main(){
    int arr[12]={0,1,1,0,0,1,0,1,0,0,0,0};
    int n=12;
    sort(arr,n);
    return 0;
}
