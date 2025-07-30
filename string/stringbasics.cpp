#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    string name1="era";
    getline(cin,name);
    cout<<"the entered string is "<<name<<endl;

    cout<<"the length of string is "<<name.length()<<endl;

    cout<<"the string is empty or not "<<name.empty()<<endl;
    
    cout<<"the value at 3rd position "<<name.at(3)<<endl;

    cout<<name.front()<<" is the front and back is "<<name.back()<<endl;

    name.append(name1);
    cout<<name<<endl;

    name.erase(8,3);
    cout<<name<<endl;

    string name2="bad";
    name.insert(8,name2);
    cout<<name<<endl;

    name.push_back('z');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;


    if(name.find(name2)==string::npos){
        cout<<"not found"<<endl;
    }
    else cout<<"found"<<endl;



    string name3="varshit badera";
    if(name.compare(name3)==0){
        cout<<"matching"<<endl;
    }
    else{
        cout<<"not matching"<<endl;
    }

cout<<name.substr(8,6)<<endl;




    
}