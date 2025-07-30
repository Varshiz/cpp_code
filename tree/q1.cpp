//implementation
//preorder,inorder and postorder traversal
//level order traversal

#include<iostream>
#include<queue>
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


void preOrder(Node* root){
    //NLR
    //base case
    if(root==NULL)return;
    
    cout<<root->data<<" ";

    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
    

}



void inOrder(Node* root){
    //LNR
    //base case
    if(root==NULL)return;
    

    //left
    inOrder(root->left);


    cout<<root->data<<" ";

    
    //right
    inOrder(root->right);
    

}


void postOrder(Node* root){
    //LRN

    //base case
    if(root==NULL)return;
    

    //left
    postOrder(root->left);


    

    
    //right
    postOrder(root->right);

    cout<<root->data<<" ";

}


void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
         cout<<q.front()->data<<" ";
         Node*a=q.front();
         q.pop();
         
         if(a->left!=NULL)
         q.push(a->left);
         if(a->right!=NULL)
         q.push(a->right);
    }

}


void levelOrderwithLineGap(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
 
 //q.size()>1 so that the loop does not end in infinite loop due to NULL
    while(q.size()>1){
         
         Node*front=q.front();
         q.pop();
         

         if(front==NULL){
            cout<<endl;
            q.push(NULL);
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



int main(){
     
     Node* root = createTree();

     cout<<"PreOrder: ";
     preOrder(root);
     cout<<endl;

     cout<<"InOrder: ";
     inOrder(root);
     cout<<endl;

     cout<<"PostOrder: ";
     postOrder(root);
     cout<<endl;


     cout<<"LevelOrder: ";
     levelOrder(root);
     cout<<endl;

     cout<<"levelOrder with line gap at each level : "<<endl;
     levelOrderwithLineGap(root);
     cout<<endl;

    return 0;
}

