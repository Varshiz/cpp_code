#include<iostream>
using namespace std;
// void printmax(int num1,int num2,int num3){
//     if(num1>=num2 && num1>=num3)
//     {
//         cout<<"max is:"<<num1;
//     }
//     else if (num2>=num1 && num2>=num3){
//         cout<<"max is "<<num2;
//     }
//     else{
//         cout<<"max is "<<num3;
//     }
// }
void printmax(int num1,int num2,int num3){
    int max0=max(num1,num2);
    int max1=max(max0,num3);
    cout<<"maximum number is:"<<max1<<endl;
}
int main(){
printmax(2,5,7);
return 0;

}