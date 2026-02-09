#include<iostream>
using namespace std;

int main(){
    // float price=100.25f;
    // float *pt= &price;

    
    // int a=10;
    // int *ptr=&a;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;

    // cout<<&price<<endl;

    // pointer in pointer
    // int a=10;
    // int *ptr=&a;

    // int **parptr=&ptr;

    // cout<<&ptr<<endl;
    // cout<<parptr<<endl;
    // cout<<*(&a)<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<**(parptr)<<endl;

    //basic logic
    int a=5;
    int *p=&a;
    int **q=&p;

    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<&a<<endl;
    cout<<*q<<endl;
}