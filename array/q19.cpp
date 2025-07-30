#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,2,1,0,0,2,1,1,0,1};
    int n=10;
    int zero=0,one=0,two=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;

        }
        else if(arr[i]==2){
            two++;
        }
    }
    cout<<zero<<"\n"<<one<<two<< endl;


    int i=0;
    while(zero--){
        arr[i]=0;
        i++;
    }
    while(one--){
        arr[i]=1;
        i++;
    }
    while(two--){
        arr[i]=2;
        i++;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}