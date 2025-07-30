#include<iostream>
#include<string>
using namespace std;

void findSubsequences(string str,string output,int index){
    if(index>=str.length()){

       //jo ans h vo output string me build ho chuka h to print karwa do
        
        cout<<"-> "    <<output<<endl;
        return;
    }
    
    char ch= str[index];

    // // pehle exclude
    //   findSubsequences(str,output,index+1);
    
    // // include
    // output.push_back(ch);
    // findSubsequences(str,output,index+1);


    //pehle include
    output.push_back(ch);
    findSubsequences(str,output,index+1);

    // then exclude
     output.pop_back();    // ye step extra aa gaya
    findSubsequences(str,output,index+1);





}


int main(){
  string str="abc";
  string output="";
  int index=0;
  findSubsequences(str,output,index);
  return 0;
}