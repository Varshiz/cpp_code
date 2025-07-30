//Heap implementation , insertion, deletion

#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int * arr;
    int capacity;
    int size;

   Heap(int capacity){
    this->arr=new int[capacity];
    this->capacity=capacity;
    //size=current number of elements in heap
    this->size=0;
}

   void insert(int val){
    if(size==capacity){
        cout<<"heap overflow: "<<endl;
        return;
    }
    //size increase karo
    //size aur index same hi h
    size++;
    int index=size;
    arr[index]=val;



    //take the val to its current position
    //heapification
    while(index>1){
        int parentIndex=index/2;
        if(arr[index]>arr[parentIndex]){
            swap(arr[index],arr[parentIndex]);
            index=parentIndex;
        }
        else {
            break;
        }
    }
   }


   void printHeap(){
    for(int i=1;i<=size;i++){
     cout<<arr[i]<<" ";
    }
   }

   int deleteRoot(){
    //    if(size<1)cout<<"Not Possible"<<endl;
    //    else{
        int ans=arr[1];
        swap(arr[1],arr[size]);
        size--;
        int index=1;
        while(index<=size){
              int leftIndex=2*index;
              int rightIndex=2*index+1;


              //find karna h ki sabse bada kon h
              int largestkaIndex=index;

              //check left child
              if(leftIndex<=size && arr[largestkaIndex]<arr[leftIndex]){
                largestkaIndex=leftIndex;
              }
              if(rightIndex<=size && arr[largestkaIndex]<arr[rightIndex]){
                largestkaIndex=rightIndex;
              }


              if(index==largestkaIndex)break;
              else{
                swap(arr[index],arr[largestkaIndex]);
                index=largestkaIndex;
              }
        }
    //    }
       return ans;
   }
};

void heapify(int* arr,int n,int index){
    int leftIndex=2*index;
    int rightIndex=2*index+1;
    int largestkaIndex=index;

    //teeno me se maximum nikalo
    if(leftIndex<=n && arr[largestkaIndex]<arr[leftIndex]){
            largestkaIndex=leftIndex;
    }

        if(rightIndex<=n && arr[largestkaIndex]<arr[rightIndex]){
            largestkaIndex=rightIndex;
    }
  //after these steps (2 conditions largestkaindex will be pointing towards largest element among 3)
    if(index!=largestkaIndex){
        swap(arr[index],arr[largestkaIndex]);
        //ab recursion sambhal lega
        index=largestkaIndex;
        heapify(arr,n,index);
    }

}

void buildHeap(int arr[],int n){
    for(int index=n/2;index>0;index--){
        heapify(arr,n,index);
    }
}


void heapSort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}

int main(){
  
//   Heap h(20);
//   //insertion
//   h.insert(10);
//   h.insert(20);
//   h.insert(5);
//   h.insert(11);
//   h.insert(6);
//   h.insert(10);

// cout<<"Printing the content of heap: "<<endl;
// h.printHeap();
// int answer=h.deleteRoot();
// cout<<endl<<"Deleted Node: "<<answer<<endl;
// h.printHeap();






int arr[]={-1,5,10,12,15,20,25};
int n=6;
buildHeap(arr,6);

cout<<"Printing Heap: "<<endl;
for(int i=1;i<=6;i++)cout<<arr[i]<<" ";
cout<<endl;

heapSort(arr,n);

cout<<"Printing Heap: "<<endl;
for(int i=1;i<=6;i++)cout<<arr[i]<<" ";
cout<<endl;
}