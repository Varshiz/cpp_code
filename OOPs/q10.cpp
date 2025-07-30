//scope resolution soln for diamond problem
//virtual is better

#include<iostream>
using namespace std;

class person{
    public:
    void walk(){
         cout<<"i can walk"<<endl;
    }
};

class teacher: public person{
   public:
   void teach(){
    cout<<"i can teach"<<endl;
   }
};

class researcher: public person{
    public:
    void research(){
        cout<<"i can research"<<endl;
    }
};


class professor:public teacher,public researcher{
    public:
    void all(){
        cout<<"i can do anything"<<endl;
    }
};

int main(){
professor p;
p.teacher::walk();
}