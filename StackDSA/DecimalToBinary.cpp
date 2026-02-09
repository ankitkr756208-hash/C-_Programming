#include<iostream>
#include<vector>
using namespace std;

int decimalToBinary(int n){
    if(n==0){
        return 0;
    }

    vector<int>binary;

    while(n >0){
        int rem=n % 2;
        binary.push_back(rem);
        n= n/ 2;
    }

    //print in reverse order
    for(int i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
}


int main(){
    int num;
    cin>>num;

    cout<<"Binary num:";
    decimalToBinary(num);
}
