#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    Person(){
        cout<<"I am person constructor\n";
    }
};
class Student : private Person{
public:
    int rollno;

    Student(string name,int age,int rollno) : Person( name, age){
        this->rollno=rollno;
        cout<<"I am student constructor\n";
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }
};

int main(){
    // Student s1;
    // s1.name="Ankit";
    // s1.age=20;
    // s1.rollno=101;
    // s1.getInfo();
    // return 0;
    Student s1("Ankit Kumar",20,101);
    s1.getInfo();
    

}