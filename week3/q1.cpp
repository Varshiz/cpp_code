#include<iostream>
using namespace std;
int main(){
    int arr[]={21,44,3,87,4,86,25,11,8};
    int target=29;
    int n= 9;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<<"target is sum of "<<i<<" and "<<j<<endl;
    //         }
    //     }

    // }

    // better approach----2 pointer

    int l=0,h=n-1;
    while(h>l){
        if(arr[l]+arr[h]==target){
            cout<<l<<" and "<<h<<endl;
              break;
        }
        else if((arr[l]+arr[h])>target) h--;
        else l++;
    }
    return 0;
}