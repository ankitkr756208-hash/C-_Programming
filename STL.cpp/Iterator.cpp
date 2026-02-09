#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
//forward iterator
    // vector<int>::iterator it;
    // for( auto it=vec.begin(); it !=vec.end();it++){
    //     cout<<*(it)<<" ";
    // }

    //backword iterator
    //  vector<int>::reverse_iterator it;
    for( auto it=vec.rbegin(); it !=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}