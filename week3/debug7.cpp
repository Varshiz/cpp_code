#include<iostream>
using namespace std;
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}
int main(){
    int arr[6];
    int s=6;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    sort0sand1s(arr,s);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}