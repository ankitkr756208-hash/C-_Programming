#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    // cout<<" top ="<<s.top() <<endl;
    stack<int>s2;
    s2.swap(s);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    cout<<"s.size :"<<s.size() <<endl;
    cout<<"s2.size :"<<s2.size() <<endl;
  

}