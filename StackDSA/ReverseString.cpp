#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="HelloWorld";
    stack<char>s;
//Push each character of string into stack
    for(int i=0;i<str.length();i++){
        char ch= str[i];
        s.push(ch);
    }
//Pop each character from stack and append to ans
    string ans="";
    while(!s.empty()){
        char ch=s.top();//Get the top character
        ans.push_back(ch);//Append to ans
        s.pop();//Remove the top character from stack
    }
    cout<<ans<<endl;//dlroWolleH
}