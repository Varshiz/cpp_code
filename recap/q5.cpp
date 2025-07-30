#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        
            cout<<"*";
        
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
        
            cout<<"*";
        
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
            cout<<"*";
        
        for(int j=0;j<2*i;j++){
            cout<<" ";
            
        }
        
            cout<<"*";
        
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                cout<<"*";               
            } 
            else if(i==0 && j==1){
                cout<<" * *";
            }
            else if(i==2 && j==1){
                cout<<" * *";
            }
            
            else if(i==1 && j==n-1){
                cout<<"   *";
            }
            else if(i==3 && j==1){
                cout<<" *";
            }
            else if(i==4 && j==n-1){
                cout<<"   *";
            }

        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==0 && j==0){
            cout<<"* * *";
        }
        if(i==2 && j==0){
            cout<<"* * *";
        }
        if(i==4 && j==0){
            cout<<"* * *";
        }
        if(i==1 && j==0){
            cout<<"*";
        }
        if(i==3 && j==0){
            cout<<"    *";
        }
    } 
    cout<<endl; 
  }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j==0 || j==n-1){
            cout<<"*";
        }
        else if(i==2 && 0<j<n){
            cout<<"*";
        }
        else cout<<" ";

    }
    cout<<endl;
}
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0 || i==n-1){
            cout<<"*";
        }
        if(j==2 && i!=0 && i!=n-1){
            cout<<"  *";
        }
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0){
            cout<<"*";

        }
        if(j==2 && i!=0){
            cout<<"  *";
        }
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
}



}