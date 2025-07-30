//insert at any position using only one pointer
//without using curr pointer

// node insertion at head

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
        // Node*curr=head;
bool p=1;
        while(position!=1){
            if(p!=1)prev=prev->next;
            if(p==1){
                prev=head;
                p=0;
            }
        
            // curr=curr->next;
            position--;
        }



        //attach newNode to prev->next
        newNode->next=prev->next;
        // attach prev to new node
        prev->next=newNode;
       
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
   
insertatPosition(head,tail,80,4);
    printll(head);
    cout << "Length of LL: " << getLength(head);
}