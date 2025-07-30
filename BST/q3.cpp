// Convert BST to sorted doubly linked list
//IMP

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


void BSTtoDoublyLinkedList(Node* root,Node* &head){
    if(root==NULL)return;

// root ke right me jao
//L
    BSTtoDoublyLinkedList(root->right,head);

// ab right wle part ko jod do root se
//N

  //attaching next pointer of current node to head of LL
    root->right=head;
  //attaching prev pointer of head of LL to current node
    if(head!=NULL)head->left=root;
    //head update
    head=root;

//root ke left me chalo
//R
    BSTtoDoublyLinkedList(root->left,head);


  
}


void printDLL(Node* head){
    cout<<"Printing DLL: "<<endl;
    Node* temp=head;

    while(temp){
        cout<<temp->data<<"->";
        temp=temp->right;
    }
    cout<<endl;
}

int main(){
  
int inOrder[]={10,20,30,40,50,60,70};
int size =7;
int s=0;
int e=size-1;
Node* root=BSTfromInorder(inOrder,s,e);
levelOrderTraversal(root);



//now we have a BST 
            //         40
            //     20     60
            //  10  30   50   70  
    
Node* head=NULL;
BSTtoDoublyLinkedList(root,head);
printDLL(head);

}