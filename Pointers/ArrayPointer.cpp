#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};


    int a=10;
    int *ptr=&a;

    //  cout<<ptr<<endl;
    //  cout<<ptr + 2<<endl;
    // // ptr--;
    // // cout<<ptr<<endl;//+4

    //  cout<<*arr<<endl;//1
    //  cout<<*(arr +2)<<endl;//3
    //  cout<<*(arr + 3)<<endl;//4

    int *ptr2;//100
    int *ptr1 =ptr2 + 2;//108

    cout<<ptr1 - ptr2<<endl;//2
   
}