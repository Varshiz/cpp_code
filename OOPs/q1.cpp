// basics

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    private:
    string gf;


    public:
    int id;
    int age;
    bool present;
    string name;
    int nos;


    //ctor
    Student(){
        cout<<"me hu constructor"<<endl;
    }

    Student(int _id,int _age,bool _present,string _name,int _nos,string _gf){
        cout<<"me parameterized constructor with gf hu"<<endl;
        id=_id;
        age=_age;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;
    }


    Student(int _id,int _age,bool _present,string _name,int _nos){
        cout<<"me parameterized constructor without gf hu"<<endl;
        id=_id;
        age=_age;
        present=_present;
        name=_name;
        nos=_nos;
        
    }

//ctor using initialisation list
Student(int _id,int _age,string _name):id(_id),age(_age),name(_name){}

    void bunk(){
        cout<<"bunk class";
    }

     void sleep(){
        cout<<"sleep in class";
    }

    private:
    void chat(){
        cout<<"chatting";
    }
};

int main(){
    Student s1;
    
    // s1.name="pappu";
    // s1.age=18;
    // s1.id=416; 
    // s1.nos=5;
    // s1.present=1;
    // cout<<s1.age<<endl;
   Student s2(123,14,1,"abhay bacha",5,"mahima");
   cout<<s2.age<<endl;
   cout<<s2.name<<endl;

    //  s2.name="selmon";
    // s2.age=52;
    // s2.id=786;
    // s2.nos=2;
    // s2.present=0;
    
    // cout<<sizeof(Student);
Student s3(1345,16,0,"aman c",5);
   cout<<s3.age<<endl;
   cout<<s3.name<<endl;


   Student *s4=new Student(765,15,1,"heap wala",4);
   cout<<s4->age<<endl;
   cout<<(*s4).name<<endl;

   //to prevent memory leak
   delete s4;

   Student s5(562,20,"me hu kon");
   cout<<s5.name; 

    
}