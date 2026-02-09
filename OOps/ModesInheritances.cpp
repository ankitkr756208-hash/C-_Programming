#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    
};
class Student : public Person{
public:
    int rollno;   
};

class GradeStudent : public Student{
    public:
    string grade;
};

int main(){
    GradeStudent s1;
    s1.name="Ankit kumar";
    s1.grade="A+";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Grade: "<<s1.grade<<endl;
    
    

}