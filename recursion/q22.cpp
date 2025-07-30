#include<iostream>
#include<vector>
#include<string>

using namespace std;
 
void subsequences(string str,string ans,int index, vector <string>&k){
    if(index>=str.length()){
        k.push_back(ans);
        return;
    }


    char ch=str[index];

    //include
    ans.push_back(ch);
    subsequences(str,ans,index+1,k);
    ans.pop_back();

    //exclude
    subsequences(str,ans,index+1,k);

    
}


int main(){
    string str="abc";
    string ans="";
    int index=0;
    vector<string>k;
    subsequences(str,ans,index,k);

    for(int i=0;i<k.size();i++){
        cout<<k[i]<<endl;
    }

}

