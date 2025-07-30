#include<iostream> 
using namespace std;
int quotient(int divident,int divisor){
    int s=0,e=divident;
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if((mid*divisor)==divident){
            return mid;
        }
        if((mid*divisor)>divident){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int divident=-29,divisor=-7;
    int finalans=quotient(abs(divident),abs(divisor));
    if((divident<0 && divisor>0)  ||  (divident>0 && divisor<0)){
        finalans= 0-finalans;
    }
    cout<<finalans<<" is the quotient";
    return 0;


}