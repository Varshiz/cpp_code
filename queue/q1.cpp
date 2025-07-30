//queue implementation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr=new int[size];
        this->size=size;
        front = -1;
        rear=-1;
        //we can take front and rear as 0 instead of -1,this will more easier to code 
    }

    void push(int val){
        //check full 
        if(rear==size-1){
            cout<<"Queue Overflow"<<endl;
            return ;
        }
        else if(front==-1 && rear==-1){
           //empty case
           front++;
           rear++;
           arr[rear]=val;
        }
        else{
           //normal case
           rear++;
           arr[rear]=val;
        }
    }


    void pop(){
        //underflow
        if(front ==-1 && rear ==-1){
           cout<<"queue Underflow"<<endl;
           return ;
        }
        else if(front == rear){
            //single elemnt left
            arr[rear]=-1;
             front=-1;
             rear=-1;
        }
        else{
            //normal case
            arr[front]=-1;
            front++;
        }
    }

    bool isEmpty(){
        if(front==-1 && rear ==-1){
            return true ;
        }
        else return false;
    }

    int getsize(){
        //bhul mat jana if wla
        if(front==-1 && rear ==-1)return 0;
        else return rear-front+1;
    }

    int getFront(){
        if(front==-1){
            cout<<"No element in queue"<<endl;
            return -1;
            }
        else    return arr[front];
    }

    // int getRear(){
    //     return arr[rear];
    // }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};  
int main(){
     Queue q(5);
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
    
     q.pop();
      q.push(60);
     q.print();
     cout<< "Size of Queue: "<<q.getsize()<<endl;
     cout<<"Is Queue Empty: "<<q.isEmpty()<<endl;
    cout<<q.getFront()<<endl;
    return 0;
}
