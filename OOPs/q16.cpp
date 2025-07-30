// runtime polymorphism 

#include<iostream>
using namespace std;
 
class Animal{
    public:
    virtual void sound(){
        cout<<"i can make sound"<<endl;
    }

    virtual ~Animal(){
        cout<<"animal dtor"<<endl;
    }
} ;

class Dog:public Animal{
    public:
    void sound() override
    //need not to write override but for better code we can add  
    {
    cout<<"dog bark"<<endl;
    }

    ~Dog(){
        cout<<"Dog dtor"<<endl;
    }
};

class Cat:public Animal{
    public:
    void sound() override
    {
    cout<<"cat Meow"<<endl;
    }

    ~Cat(){
        cout<<"cat dtor"<<endl;
    }
};


void sound(Animal *animal){
    animal->sound();   //polymorphic
    //animal->sound is behaving as per required object
}


int main(){

    Animal *animal=new Dog();  //this is called upcasting ..parant se dog 
    sound(animal);

    animal = new Cat();
    sound(animal);


 delete animal;
    return 0;


}

