//Circular queue implementation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class cQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    cQueue(int size){
        arr=new int[size];
        this->size=size;
        front = -1;
        rear=-1;
        //we can take front and rear as 0 instead of -1,this will more easier to code 
    }

    void push(int val){
       //empty
       //overflow
       //circular nature
       //general case

       if(front==-1 && rear==-1){
        front++;
        rear++;
        arr[rear]=val;
       }
       else if(front==0 && rear==size-1 || rear==front-1 ){
           cout<<"OverFlow"<<endl;

       }
       else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=val;
       }
       else{
            rear++;
            arr[rear]=val;
       }
       
    }


    void pop(){
        //underflow
        //single elemnt
        //circular
        //general case
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
        else if(front==size-1){
            front=0;
            arr[front]=-1;
        }
        else{
            //normal case
            arr[front]=-1;
            front++;
        }
    }

    

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};  
int main(){
     cQueue q(5);
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
    
     q.pop();
      q.push(60);
     q.print();
    
    return 0;
}
