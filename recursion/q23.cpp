#include<iostream>

using namespace std;

bool lastoccurence(string k,int size ,int i,char target){
    if(i<0)return 0;
    if(k[i]==target)
    {cout<<i;
    return 1;
    }

    lastoccurence(k,size,i-1,target);
   return 0;

}



int main(){
    string k="abhuvto";
    int size=k.length();
    int index=size-1;
    char target='o';
    bool m=lastoccurence(k,size,index,target);
    cout<<endl;
    if(m)cout<<"found";
    else cout<<"not found";
}