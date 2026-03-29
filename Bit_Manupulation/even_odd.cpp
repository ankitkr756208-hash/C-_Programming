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

int getIthBit(int num , int i){
    int bitMask=1<<i;
    if(!(num & bitMask)){
        return 0;
    }
    else {
        return 1;
    }
}

int setItBit(int num, int i){
    int bitMask=1<<i;
    return (num |bitMask);
}

int main(){
    oddEven(5);
    oddEven(51);
    oddEven(50);
    cout<<getIthBit(6,2)<<endl;

    cout<<setItBit(8,1)<<endl;

}