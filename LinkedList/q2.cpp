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
    insertatHead(head,tail, 5);

    printll(head);
    cout << "Length of LL: " << getLength(head);
}