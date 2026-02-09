#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    //reverse
    // vector<int> vec={1,2,3,4,5};

    // reverse(vec.begin(),vec.end());

    // for(auto val : vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    //permutation

    string s="abc";
    next_permutation(s.begin(),s.end());

    cout<<s<<endl;

    cout<<min(2,4);
    cout<<max(2,4);
//swap value
    int d=9, e=7;
    swap(d,e);
    cout<<endl;
    cout<<"a = "<<d<<endl;

    //min and max element in array
    vector<int> vec={1,2,3,45};

    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;

    //binary search

    cout<<binary_search(vec.begin(),vec.end(),45)<<endl;

   // count set bits
    // int n=2;
    // cout<<_builtin_popcount(n)<<endl;

}