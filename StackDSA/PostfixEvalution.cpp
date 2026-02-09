#include<iostream>
#include<stack>
using namespace std;

int postfixEvalution(string s){
    stack<int>st;

    for(int i=0;i<s.length();i++){
        if(s[i]>'0' && s[i]<'9'){
           st.push(s[i] - '0'); 
        }
        else {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch ((s[i]))
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(op1 ^ op2);
                break;
            
            default:
                break;
            }

        }
    }
    return st.top();
}

int main(){
       string prefix;
    cout << "Enter postfix expression (single-digit operands): ";
    cin >> prefix;

    cout << "Result = " << postfixEvalution(prefix) << endl;
    return 0;

}
//"46+2/5*7+" => 32
//time complexity= O(l) where l= length of string