#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int* agePtr;
    // Default constructor
    Student(string name,int age) {
      this->name=name;
      agePtr=new int;
      *agePtr=age; 
    }

    Student(Student &obj){
        this->name=obj.name;
        agePtr=new int;
        *agePtr=*obj.agePtr;
    }
    //destructor
    ~Student(){
        cout<<"Hi, I am destructor\n";
        delete agePtr;// memory leak
    }

   void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<*agePtr<<endl;
   }   
};

int main(){
    Student s1("Ankit",20);
    s1.getInfo();
   
    // Student s2(s1); // Copy constructor is called here
    // s1.getInfo();
    // *(s2.agePtr)=25; // Modifying s2's age
    // s1.getInfo(); // s1's age should remain unchanged

    // s2.name="Rahul kumar";
    // s2.getInfo(); // s1's age should remain unchanged
    // return 0;

}
