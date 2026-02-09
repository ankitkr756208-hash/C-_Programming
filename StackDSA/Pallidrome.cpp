#include<iostream>
#include<stack>
using namespace std;


bool isPallidrome(string str){
    stack<char>s;

//Push each character of string into stack
    for(int i=0;i<str.length();i++){
        char ch= str[i];
        s.push(ch);
    }
//Pop each character from stack and compare with original string
    for(int i=0;i<str.length();i++){
        char topChar=s.top();//Get the top character
        s.pop();//Remove the top character from stack
        if(topChar!=str[i]){
            return false;
        }

}
    return true;
}

int main(){
    // string str="madam";
    // stack<char>s; 
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    if(isPallidrome(str)){
        cout<<"String is Pallidrome"<<endl;
    }
    else{
        cout<<"String is not Pallidrome"<<endl;
    }

}