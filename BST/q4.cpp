// Convert sorted doubly linked list to BST
//Imp

#include <bits/stdc++.h>
using namespace std;
 class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
      this->data=val;
      this-> left= NULL;
      this-> right= NULL;
    }

 };

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
         if(temp==NULL){
            cout<<endl;
            if(!q.empty())q.push(NULL);
         }
         else {
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
             if(temp->right)q.push(temp->right);
         }

 
        

    }
    
}




Node* insertintoBST(Node* root,int data){
  if(root==NULL){
    root=new Node(data);
    return root;

  }

  if(data > root->data){
    root->right =insertintoBST(root->right,data);
  }
  else {
   root->left = insertintoBST(root->left,data);
  }

  return root;
}



 void createBST(Node* &root){
    cout<<"Enter data :"<<endl;
    int data;
    cin>>data;
 
    while(data!=-1){
        root=insertintoBST(root,data);
      cout<<"Enter data :"<<endl;
       cin>>data;
    }
 }


Node* DLLtoBST(Node* &head,int n){
    if(head==NULL || n<=0)return NULL;
//LNR

    //L
    Node*leftSubtree=DLLtoBST(head,n/2);

    //N
    Node* root=head;
    //leftSubtree ko jod do(jo upper banaya tha usko)
    root->left=leftSubtree;
    //update head ................imp
    head=head->right;

    //R
    Node* rightSubtree=DLLtoBST(head,n-n/2-1);
    root->right=rightSubtree;

    return root;
}


int main(){
  
 Node* first=new Node(10);
 Node* second=new Node(20);
 Node* third=new Node(30);

 first->right=second;
 second->right=third;
 second->left=first;
 third->left=second;

Node* head=first;
//  DLL : 10 <-> 20 <-> 30

Node* root=DLLtoBST(head,3);

levelOrderTraversal(root);
}