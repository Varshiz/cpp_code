
// using virtual to resolve diamond problem
// better than scopr resolution

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    void walk(){
         cout<<"i can walk"<<endl;
    }
};

class teacher:virtual public person{
   public:
   void teach(){
    cout<<"i can teach"<<endl;
   }
};

class researcher:virtual public person{
    public:
    void research(){
        cout<<"i can research"<<endl;
    }
};





class professor:public teacher,public researcher,virtual public person{
    public:
    void all(){
        cout<<"i can do anything"<<endl;
    }
};

int main(){
professor p;
p.walk();
}

// class professor:public teacher,public researcher{
//     public:
//     void all(){
//         cout<<"i can do anything"<<endl;
//     }
// };

// int main(){
// professor p;
// p.walk();
// }


