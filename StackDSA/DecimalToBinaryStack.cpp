#include<iostream>
#include<stack>
using namespace std;

int decimalToBase(int n,int base){
    if(n==0){
        return 0;
    }
    stack<int>st;

    //push remainders into stack
    while(n > 0){
        st.push(n % base);
        n= n/ base;
    }
    //pop and print
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}



int main()
{
    int num;
    cout<<"Enter a decimal no:";
    cin>>num;

    cout<<"Binary No:";
    decimalToBase(num ,2);
    cout<<endl;

    cout<<"Ocatal no:";
    decimalToBase(num, 8);
    cout<<endl;


    cout<<"Hexadecimal No:";
    decimalToBase(num, 16);
    cout<<endl;



}