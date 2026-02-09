#include<iostream>
using namespace std;

void change(int* ptr){//pass by refrence
    *ptr =20;
}
int main(){
    int a=10;
    change(&a);

    cout<<"inside main fxn:"<<a<<endl;//20

}