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
Teacher(string name,string dept,string subject,double salary){
    this->name=name;
    this->dept=dept;
    this->subject=subject;
    this->salary=salary;
}

//copy constructor
Teacher(Teacher &orgObj){
    cout<<"I am copy constructor\n";
    this->name=orgObj.name;
    this->dept=orgObj.dept;
    this->subject=orgObj.subject;
    this->salary=orgObj.salary;

}
void getINfo(){
    cout<<"name :"<<name <<endl;
    cout<<"subject :"<<subject <<endl;
}
    string name;
    string dept;
    string subject;

};
int main(){
    Teacher t1("Ankit","CSE","C++",25000);
    // t1.getINfo();
    // cout<<t1.dept<<endl;
    Teacher t2(t1);//defauit copy constructor -invoke
    t2.getINfo();
    
    return 0;

}
