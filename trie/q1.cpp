//ye revise karo 
//implementation of a trie

#include<iostream>
using namespace std;


class TrieNode{
    public:

    char value;    
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
        this->value=val;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};


//insertion
void insertword(TrieNode* root,string word){
    //base case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
   
   char ch=word[0];
   int index=ch-'a';
   TrieNode* child;
   if(root->children[index]!=nullptr){
    //child present
    child=root->children[index];
   }
   else {
    //absent
    child=new TrieNode(ch);
    root->children[index]=child;
   }

//recursion
insertword(child,word.substr(1));


}



bool searchWord(TrieNode* root,string word){
    //base case
    if(word.length()==0)return root->isTerminal;

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else {
            //not found
            return false;
    }

   bool recursionkaAns=searchWord(child,word.substr(1));
   return recursionkaAns;

}



 void deleteWord(TrieNode* root,string word){
    if(word.length()==0){
        root->isTerminal=false;
        return;
 }

//1 case mera
char ch=word[0];
int index=ch-'a';
TrieNode* child;

if(root->children[index]!=NULL){
    //present 
    child=root->children[index];
}
else{
    return;
}

//baaki recursion sambhal lega
deleteWord(child,word.substr(1));
 }



void solve2(TrieNode* root,string ans,string p){
    if(root->isTerminal)cout<<p+ans+root->value<<endl;
    
    char ch=root->value;
    ans+=root->value;
    // int index=ch-'a';
    TrieNode* child;

    for(int i=0;i<26;i++){
        if(root->children[i]!=NULL){
            child=root->children[i];
            solve2(child,ans,p);
            
        }
    }

}


void solve(TrieNode* root,string word,string p){
    if(word.length()==0){
        //  solve2(root,"",p);
        TrieNode* child;
        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                child=root->children[i];
                solve2(child,"",p);
                
            }
        }
         return;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    solve(child,word.substr(1),p);
}


int main(){
 TrieNode* root=new TrieNode('-');

insertword(root,"cater");
insertword(root,"care");
insertword(root,"com");
insertword(root,"lover");
insertword(root,"loved");
insertword(root,"load");
insertword(root,"lov");
insertword(root,"bat");
insertword(root,"cat");
insertword(root,"car");

if(searchWord(root,"bat"))cout<<"found...."<<endl;
else cout<<"Not found"<<endl;

deleteWord(root,"bat");

if(searchWord(root,"bat "))cout<<"found....meko mil gaya"<<endl;
else cout<<"Not found, Nahi mila bhai"<<endl;



solve(root,"","");

}