#include<iostream>
using namespace std;

void oddEven(int num){
    if((num & 1)==0){
        cout<<"Even No"<<endl;
    }
    else {
        cout<<"odd No"<<endl;
    }
}

int main(){
    oddEven(5);
    oddEven(51);
    oddEven(50);

}