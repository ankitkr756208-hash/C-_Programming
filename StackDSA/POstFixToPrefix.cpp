#include <bits/stdc++.h>
using namespace std;

// Function to check if character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert prefix to postfix
string prefixToPostfix(string prefix) {
    stack<string> st;

    // Traverse the prefix expression from right to left
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char c = prefix[i];

        // If operand, push to stack
        if (isalnum(c)) {
            st.push(string(1, c));
        }
        // If operator, pop two operands and form postfix
        else if (isOperator(c)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            // postfix = operand1 operand2 operator
            string temp = op1 + op2 + c;
            st.push(temp);
        }
    }

    // Final postfix expression
    return st.top();
}

int main() {
    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    cout << "Postfix expression: " << prefixToPostfix(prefix) << endl;
    return 0;
}
