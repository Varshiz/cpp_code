#include<iostream>
using namespace std;
int sqr(double t){
    double s=0,e=t,ans;
    while(s<=e){
        int mid=(s+e)/2;
        if((mid*mid)==t){
            ans=mid;
            return ans;
        }
        else if((mid*mid)>t){
            e=mid-1;
        }
        else if((mid*mid)<t){
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}


double sqrf(int root,int t){
    double s=root+0.1, e=root+0.9, ansf;
    while(s<=e){
        double mid=(s+e)/2;
        if((mid*mid)==t){
            ansf=mid;
            return ansf;
        }
        else if((mid*mid)>t){
            e=mid-0.01;
        }
        else if((mid*mid)<t){
            ansf=mid;
            s=mid+0.01;
        }
    }
    return ansf;
}



int main(){
    double t=85;
    double root=sqr(t);
    cout<<"the root of given no. is "<<root<<endl;
    double final=sqrf(root,t);
    cout<<final<<" is the root of given no.";

  return 0;

 
}