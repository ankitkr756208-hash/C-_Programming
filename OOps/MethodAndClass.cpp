#include<iostream>
#include<strinG>
using namespace std;

class Teacher {
private:
    double salary;
public:
    //properties/ attributes
    //non-parametrised
    Teacher(){
        cout<<"Hi, I am constructor\n";
        dept="cse";
    }
//parametrised
Teacher(string n,string d,string s,double sal){
    name =n;
    dept=d;
    subject=s;
    salary =sal;
}
    string name;
    string dept;
    string subject;
    
    
//methods/member function
void changDEpt(string newDept){
    dept=newDept;
}

//setter
void setSalary(double s){
    salary = s;
}
//getter
double getSalary(){
    return salary;
}

};



class student {
public:
    
    string name;
    string dept;
    string subject;
    double salary;
};

int main(){
    Teacher t1;//constructor call
    t1.name="Ankit";
    t1.subject="c++";
    t1.dept="CSE";
    t1.setSalary(5000);
    

    cout<<t1.dept<<endl;
    cout<<t1.getSalary()<<endl;

}
