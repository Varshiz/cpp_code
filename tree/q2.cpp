// making a tree when preorder and inorder traversal is given 
// Important

#include<bits/stdc++.h>
using namespace std;

// #include<iostream>
// #include<queue>
// using namespace std;

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


Node* createTree(){
    cout<<"Enter a Value: "<<endl;
    int data;
    cin>>data;

  if(data==-1){
    return NULL;
  }

    Node* root=new Node(data);

    root->left=createTree();
    root->right=createTree();
 

 return root;
}

void levelOrderwithLineGap(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
 
 //q.size()>1 so that the loop does not end in infinite loop due to NULL
    while(!q.empty()){
         
         Node*front=q.front();
         q.pop();
         

         if(front==NULL){
            cout<<endl;
            if(!q.empty())q.push(NULL);
         }
         else {
             cout<<front->data<<" ";

            if(front->left!=NULL)
         q.push(front->left);

         if(front->right!=NULL)
         q.push(front->right);
         }
         
    }

}

int searchInorder(int element,int n,int inorder[]){
    for(int i=0;i<n;i++){
        if(inorder[i]==element)return i;
    }
    return -1;
}


Node* solve(int inorder[],int preorder[],int &preindex,int inorderstart,int inorderend,int n){
    if(preindex>=n || inorderstart>inorderend){
        return NULL;
    }

    int element=preorder[preindex];
    preindex++;
    Node* root=new Node(element);


    int position=searchInorder(element,n,inorder);

    root->left=solve(inorder,preorder,preindex,inorderstart,position-1,n);
    root->right=solve(inorder,preorder,preindex,position+1,inorderend,n);

    return root;
}

int main (){

int inorder[]={10,8,6,2,4,12};
int preorder[]={2,8,10,6,4,12};
int preindex=0;
int n=6;
int inorderstart=0;
int inorderend=5;
Node* root=solve(inorder,preorder,preindex,inorderstart,inorderend,n);

cout<<"Printing elements of the entire tree : "<<endl;
levelOrderwithLineGap(root);



return 0;




}