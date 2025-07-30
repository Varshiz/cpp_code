// LeftEyeView && RightEyeVIew
// TopView && BottomView
//Boundary Traversal

//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

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


Node* createTree(){
    // cout<<"Enter a Value: "<<endl;
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
// class Node{
//     public:
//     int data ;
//     Node* left;
//     Node* right;

//     Node(int val){
//          this->data=val;
//          this->left=NULL;
//          this->right=NULL;
//     }
// };


// Node* makeTree(){
//     //  cout<<"Enter a Value: "<<endl;
//     int data;
//     cin>>data;

//     if(data==-1)return NULL;
//    Node* root=new Node(data);

//     root->left=makeTree();
//     root->right=makeTree();
 

//  return root;


     
// }


void leftView(Node* root,vector<int>&ans,int level){
    //incomplete
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

        else{
            if(level==ans.size())cout<<temp->data;

            if(temp->left!=NULL){
                leftView(temp->left,ans,level+1);
            }

            if(temp->right!=NULL){
                leftView(temp->right,ans,level+1);
            }
        }
    }

}  

void easyLeftView(Node* root,vector<int>&ans,int level ){
    if(root==NULL)return;

    if(ans.size()==level)ans.push_back(root->data);

     easyLeftView(root->left,ans,level+1);
     easyLeftView(root->right,ans,level+1);

}


void easyRightView(Node* root,vector<int>&ansright,int levelright ){
    if(root==NULL)return;

    if(ansright.size()==levelright)ansright.push_back(root->data);

     easyRightView(root->right,ansright,levelright+1);
     easyRightView(root->left,ansright,levelright+1);

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

void ansTopView(Node* root){
    map<int , int>mp;
    queue<pair<Node*,int>>q;
    
    q.push(make_pair(root,0));

    while(!q.empty()){
       pair<Node* , int> temp=q.front();
       q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;
        // q.pop();

        // if(mp.find(hd)==mp.end()){
        //     mp[hd]=frontNode->data;
        // }
        mp[hd]=frontNode->data;

        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }

        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }


    }

    cout<<"Printing Top View :  "<<endl;
    for(auto i:mp){
        cout<<i.second<<" ";
    }
}



void boundaryLeft(Node* root){
    if(root==NULL)return ;

//  leaf node
    if(root->left==NULL && root->right==NULL)return;

    cout<<root->data<<" ";

    if(root->left!=NULL)boundaryLeft(root->left);
    else boundaryLeft(root->right);
}

void boundaryLeaf(Node* root){
    if(root==NULL)return ;

    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
        
    }

    boundaryLeaf(root->left);
    boundaryLeaf(root->right);
}



void boundaryRight(Node* root){
    if(root==NULL)return ;

//  leaf node
    if(root->left==NULL && root->right==NULL)return;


    if(root->right!=NULL)boundaryRight(root->right);
    else boundaryRight(root->left);
    
    
    
    cout<<root->data<<" ";
}

void boundaryView(Node* root ){
    if(root==NULL)return;
    cout<<root->data<<" ";

    //printing left boundary nodes
    boundaryLeft(root->left);

    // printing leaf nodes
    //this condition can also print root node two times if it is a leaf node
    // to avoid divide this into two : boundaryLeaf(root->left) , boundary(root->right)
    boundaryLeaf(root);

    //printing right boundary nodes
    boundaryRight(root->right);
}






int main(){
Node* root=createTree();


// vector<int>ans;
// int level=0;
// easyLeftView(root,ans,level);
// cout<<"Left View: "<<endl;
// for(int i=0;i<ans.size();i++){
// cout<<ans[i]<<" ";
// }
// cout<<endl;



// vector<int>ansright;
// int levelright=0;
// easyRightView(root,ansright,levelright);
// cout<<"Right View: "<<endl;
// for(int i=0;i<ansright.size();i++){
// cout<<ansright[i]<<" ";
// }



// ansTopView( root);

boundaryView(root);



// levelOrderwithLineGap(root);

}