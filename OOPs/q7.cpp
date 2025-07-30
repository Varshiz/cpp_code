// accessing private 




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
    int *a;
    


  
 
    

    Student(int _id,int _age,bool _present,string _name,int _nos,string _gf){
        cout<<"me parameterized constructor with gf hu"<<endl;
        id=_id;
        age=_age;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;
        
    }


   


    void bunk(){
        cout<<"bunk class";
    }

     void sleep(){
        cout<<"sleep in class";
    }
    void getgfname(){
        cout<<gf<<endl;
    }

    void setgfname(string p){
        gf=p;
        cout<<gf<<endl;
    }

    private:
    void chat(){
        cout<<"chatting";
    }
};

int main(){
    
    
    
   Student s2(123,14,1,"abhay bacha",5,"mahima");
   cout<<s2.age<<endl;
   cout<<s2.name<<endl;
//    cout<<s2.gf<<endl; //we cannot access it as it is private
s2.getgfname(); //accessing private member

//modifying private member
s2.setgfname("nivedita");

return 0;
    
}