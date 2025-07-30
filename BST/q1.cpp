// creating BST
// inorder, preorder, postorder traversal
// minvalue and maxvalue
// search in BST

// imp  : :  :  :  deleting a node 

// Note ::::: Inorder of a BST is always sorted


//50 30 60 25 40 70 80 55 -1

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


void preorder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* minimumvalue(Node* root){
   
    Node* temp=NULL;
    while(root!=NULL){
        temp=root;
        root=root->left;
    }
    return temp;
}

Node* maximumvalue(Node* root){
   
    Node* temp=NULL;
    while(root!=NULL){
        temp=root;
        root=root->right;
    }
    return temp;
}


bool searchinBST(Node* root,int target){
    if(root==NULL)return false;
    if(root->data==target)return true;

    bool leftKaAns=false;
    bool rightKaAns=false;

    if(target > root->data){
           rightKaAns=searchinBST(root->right,target);
    }
    else {
        leftKaAns=searchinBST(root->left,target);
    }

    return leftKaAns || rightKaAns;
}


Node* deleteNode(Node* root, int target){
    if(root==NULL){
        return NULL;
    }

    if(root->data==target){
         
         if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
         }

         else if(root->left!=NULL && root->right==NULL){
            //root delete karo aur jo jhi left me h usko current root ki jagah la do
            Node* childSubtree=root->left;
            delete root;
            return childSubtree;
         }
         else if(root->left==NULL && root->right!=NULL){
            //root delete karo aur jo jhi right me h usko current root ki jagah la do
            Node* childSubtree=root->right;
            delete root;
            return childSubtree;
         }
         else {
            //right aur left dono null nhi h

            //root->left ki maximum value nikalo
            Node* maxi=maximumvalue(root->left);

            //root ki value ko us value se replace karo
            root->data=maxi->data;
            
            //ab us maxi node ko delete karo aur baki hissa root me attach kar do
            root->left=deleteNode(root->left,maxi->data);

            return root;


         }

    }

    if(root->data > target){
        //left me chalo
        root->left=deleteNode(root->left,target);
    }

    if(root->data < target){
        //right me chalo
        root->right=deleteNode(root->right,target);

    }

    return root;


}




int main(){
    Node* root=NULL;
    createBST(root);
    cout<<"level order :"<<endl;
    levelOrderTraversal(root);

    // cout<<endl;
    // cout<<"preorder : ";
    // preorder(root);

    // cout<<endl;
    // cout<<"Inorder : ";
    // inorder(root);

    // cout<<endl;
    // cout<<"postorder : ";
    // postorder(root);

    // cout<<endl;
    // Node* minvalue=minimumvalue(root);
    // cout<<"Minimum value: ";
    // if(minvalue)cout<<minvalue->data;
    // else cout<<"No min value possible";


   
    // cout<<endl;
    // Node* maxvalue=maximumvalue(root);
    // cout<<"Maximum value: ";
    // if(minvalue)cout<<maxvalue->data<<endl;
    // else cout<<"No max value possible";

    // //search in BST
    // cout<<"Seacrching......."<<endl;
    // int target=5;
    // bool ans=searchinBST(root,target);
    // if(ans)cout<<"Found"<<endl;
    // else cout<<"Not Found"<<endl;


cout<<endl;
cout<<"After Deletion : "<<endl;
    int target=50;
    root=deleteNode(root,target);
    levelOrderTraversal(root);


    

}