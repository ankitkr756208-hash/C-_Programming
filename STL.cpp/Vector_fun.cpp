#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};

    // vec.erase(vec.begin() + 1,vec.begin() + 3);
    // vec.insert(vec.begin() + 2,100);
     vec.clear();
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"size :"<<vec.size()<<endl;
    cout<<"empty :"<<vec.empty()<<endl;
    cout<<"capacity :"<<vec.capacity()<<endl;
    cout<<"vec.begin :"<<*(vec.begin())<<endl;
    cout<<"vec.end :"<<*(vec.end())<<endl;

}