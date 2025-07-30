//inheritance

#include<iostream>
using namespace std;

class bird{
    public:
    int age,wings;
    string color;

    void fly(){
        cout<<"me udd sakti/sakta hu"<<endl;
    }

    void eat(){
        cout<<"me udd kha sakta/sakti hu"<<endl;
    }
};


class sparrow:public bird{
    public:
    void sundar(){
        cout<<"me to sundar hu"<<endl;
    }
};

class kabutar:public bird{
    public:

    kabutar(int wings,string color){
       this->wings=wings;
       this->color=color;
    }
    void gutargu(){
        cout<<"me to gutar gu karta hu"<<endl;
    }
}; 
int main(){

    cout<<"pehle baat karte h a ki.........................."<<endl;
  bird a;
  a.age=5;
  cout<<a.age<<endl;;
    a.fly();


 cout<<"\nab baat karte h b ki.........................."<<endl;

 sparrow b;
 b.color="brown";
 cout<<b.color<<endl;
 b.eat();
 b.sundar();

cout<<"\nab baat karte h c ki............................"<<endl;

kabutar c(3,"purple");
cout<<c.wings<<" "<<c.color<<endl;
c.eat();
c.gutargu();
 
cout<<"\nkhatam tata bye bye gaya"<<endl;


    return 0;
}