#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBlanced(string exp){
    stack<char>s;

    for(char ch: exp){
        if(ch=='(' || ch=='{' || ch=='['){
            //Push opening bracket into stack
            s.push(ch);
        }
        else{
            //If closing bracket is found, check for matching opening bracket
            if(s.empty()){
                return false; //No matching opening bracket
            }
            char topChar=s.top();
            s.pop();

            //Check if the brackets match
            if((ch==')' && topChar!='(') ||
               (ch=='}' && topChar!='{') ||
               (ch==']' && topChar!='[')){
                return false; //Brackets do not match
               }
        }

    }
    return s.empty();

}

int main(){
    string exp;
    cout<<"Enter an expression:";
    cin>>exp;
    if(isBlanced(exp)){
        cout<<"Expression is balanced"<<endl;
    }
    else{
        cout<<"Expression is not balanced"<<endl;
    }
}