//Doubly LL
//Creation , Insertion and Deletion

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout<<"Node is deleted"<<endl;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLength(Node *head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertatHead(Node *&head, Node *&tail, int data)
{

    // empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // LL is non-empty
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertatTail(Node *&head, Node *&tail, int data)
{

    // empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else
    {
        // create newNode
        Node *newNode = new Node(data);

        // tail->next should point to newNode
        tail->next = newNode;

        // newNode->prev should point to tail
        newNode->prev = tail;

        // update tail;
        //  or tail=tail->next;
        tail = newNode;
    }
}

void insertatPosition(Node *&head, Node *&tail, int data, int position)
{
    int len = findLength(head);
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else if (position == 1)
    {
        insertatHead(head, tail, data);
    }
    else if (position == len + 1)
    {
        insertatTail(head, tail, data);
    }

    else
    { 
         Node *newNode = new Node(data);
        // traverse
        Node *prevNode = NULL;
        Node *curr = head;
       

        while (position != 1)
        {
            position--;
            curr = curr->next;
        }

        prevNode = curr->prev;
        

       //
        newNode->next = curr;
        newNode->prev = prevNode;

        prevNode->next = newNode;
        curr->prev = newNode;
    }
}


void deleteNode(Node *&head, Node *&tail, int position){
  int len = findLength(head);

if(head== NULL){
    cout<<"Nothing to delete as the LL is Empty"<<endl;
}

  if(position==1){
    //delete head;
    Node*temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    delete temp;
  }

  else if(position == len){

    //delete tail
    Node* temp= tail;
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
    delete temp;
    
  }

  else if(head == tail){
    Node* temp= head;
    head=NULL;
    tail=NULL;
    delete temp;
  }

  else {

    Node* prevNode=NULL;
    Node* currNode=head;
    Node* nextNode=NULL;

    while(position != 1){
        position --;
        currNode=currNode->next;
      }

      prevNode=currNode->prev;
      nextNode=currNode->next;

      prevNode->next=nextNode;
      nextNode->prev=prevNode;

      currNode->next=NULL;
      currNode->prev=NULL;

      delete currNode;


  }

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertatHead(head, tail, 40);
    insertatHead(head, tail, 30);
    insertatHead(head, tail, 20);
    insertatHead(head, tail, 10);
    insertatTail(head, tail, 90);


    cout << "Length of LL : " << findLength(head) << endl;
    printLL(head);
    insertatPosition(head, tail, 210, 6);
    insertatPosition(head, tail, 857, 1);
    insertatPosition(head, tail, 689, 3);
     cout<<endl;
    cout << "Length of LL : " << findLength(head) << endl;
    printLL(head);

 cout<<endl;
    deleteNode(head,tail , 8);
    deleteNode(head,tail , 1);
    deleteNode(head,tail , 3);

      
    cout << "Length of LL : " << findLength(head) << endl;
    printLL(head);
    

    return 0;
}