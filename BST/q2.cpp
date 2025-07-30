//BST from Inorder


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



Node* BSTfromInorder(int inOrder[],int s,int e){
    if(s>e)return NULL;
     
     //new node bano
    int mid=(s+e)/2;
    int element=inOrder[mid];
    Node* root=new Node(element);
    

    // baaaki recursion se karao
    root->left=BSTfromInorder(inOrder,s,mid-1);
    root->right=BSTfromInorder(inOrder,mid+1,e);


    return root;
}



int main(){
  
int inOrder[]={10,20,30,40,50,60,70};
int size =7;
int s=0;
int e=size-1;
Node* root=BSTfromInorder(inOrder,s,e);
levelOrderTraversal(root);

    

}