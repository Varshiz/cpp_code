//check whether a CBT is a valid heap or not

#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;

  }
};
 
 class Info{
    public:
    int maxi;
    bool isvalidHeap;
    Info(int maximumVal,bool validorNot){
        this->maxi=maximumVal;
        this->isvalidHeap=validorNot;

    }
    Info(){

    }
 };


 Info checkMaxheap(Node* root){
         if(root==NULL){
              Info temp;
              temp.isvalidHeap=true;
              temp.maxi=INT_MIN;
              return temp;
         }
         if(root->left==NULL && root->right==NULL){
               Info temp;
              temp.isvalidHeap=true;
              temp.maxi=root->data;
         }


         Info leftkaAns=checkMaxheap(root->left);
         Info rightkaAns=checkMaxheap(root->right);

         if(root->data > leftkaAns.maxi && root->data > rightkaAns.maxi && leftkaAns.isvalidHeap && rightkaAns.isvalidHeap){
            Info ans;
            ans.maxi=root->data;
            ans.isvalidHeap=true;
            return ans;
         }
         else {
            Info ans;
            ans.maxi=max(root->data,max(leftkaAns.maxi,rightkaAns.maxi));
            ans.isvalidHeap=false;
            return ans;
         }
 }



int main(){
   //this code is incomplete as tree is not created right now;
   //add the code createtree from tree file then create a tree 
   //after this the code is correct
}