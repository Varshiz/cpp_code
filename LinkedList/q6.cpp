//delete a node 


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        // cout<<"default ctor"<<endl;
        this->next = NULL;
    }

    Node(int data)
    {
        // cout<<"parameterised ctor"<<endl;
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        cout<<"Destructor called "<<endl;
    }
};



void insertatHead(Node *&head,Node* &tail, int data)
{

    if (head == NULL)
    {

        // empty LL
        // create new node
        Node *newNode = new Node(data);

        // update head
        head = newNode;
        tail=newNode;
    }

    else
    {
        //LL is non empty
        // create new node
        Node *newNode = new Node(data);

        // attach new node to head node
        newNode->next = head;

        // update head
        head = newNode;
    }
}

void insertatTail(Node *&head,Node* &tail, int data)
{

    if (head == NULL)
    {
 
        // empty LL
        // create new node
        Node *newNode = new Node(data);

        // update head and tail
        head = newNode;
        tail = newNode;
    }

    else
    {
        //LL is non empty
        // create new node
        Node *newNode = new Node(data);

        // attach new node to tail node
        tail->next = newNode;

        // update tail
        tail = newNode;
    }
}

void printll(Node *head)
{
    cout << "printing the LL : " << " ";
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insertatPosition(Node *&head,Node* &tail, int data,int position){
    int length=getLength(head);
  
     if(position<=1){
        insertatHead(head,tail,data);
    }
 //important
    else if(position>length){
        insertatTail(head,tail,data);
    }

    else {
        //insert at middle of LL


        //create a new node
        Node* newNode= new Node(data);

        //traverse prev/curr at position
        Node*prev=NULL;
        Node*curr=head;

        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }

        // attach prev to new node
        prev->next=newNode;
        //attach newNode to curr
        newNode->next=curr;
    }
}



void deleteNode(Node *&head,Node* &tail, int position){
    int l=getLength(head);
   if(position <1 || position > l || head==NULL){
    cout<<"enter a valid position"<<endl;
   }
 
   
   if(head==tail){
    //single element
    Node* temp=head;
    delete temp;
    head=NULL;
    tail=NULL;

   }

   if(position ==1 ){
    //copy head
    Node* temp=head;

    //new head position(or  head =temp->next)
    head=head->next;
    //diconnect the node
    temp->next=NULL;

    //delete
    delete temp;

   }

   else if (position == l){
      //to reach second last node
    Node* prev=head;

    //traverse to the second lsst node
    while(prev->next != tail){
        prev=prev->next;
    }

// prev node ka link null karo
    prev->next=NULL;

    //node delete karo
    delete tail;

    //update tail
    tail=prev;
   }


   else {

   //to reach curr and prev node
    Node* prev=NULL;
    Node* curr=head;
    

    //traverse to the curr and prev node
    while(position!=1){
        
        prev=curr;
        curr=curr->next;
        position--;
    }
    
    //prev->next me curr ka next node add karo
    prev->next=curr->next;
 
     //isolate the node 
    curr->next=NULL;

   //delete curr
    delete curr;


   }

}

int main()
{
    // static allocation
    Node a;

    // dynamic allocation
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node *head = first;
    Node* tail=fourth;
   
// insertatPosition(head,tail,80,0);
deleteNode(head,tail ,4);
    printll(head);
   
    cout << "Length of LL: " << getLength(head)<<endl;
}