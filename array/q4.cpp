#include<iostream>
using namespace std;
int main(){
    int arr[5]={2, 4, 6, 8, 9};
    bool output=0;
    int n;
    for(int i=0;i<5;i++){
        if(arr[i]==7){
            n=i;
            output=1;
            break;
        }
    }
    if(output==1){
        cout<<"value found at: "<<n<<endl;
    }
    else
    cout<<"not found"<<endl;
    return 0;
}