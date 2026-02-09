#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    // pair<int , int>p={1,2};
    // pair<int, pair<char, int>>p ={1,{'a',3}};

    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    vec.push_back({4,5});//insert
    vec.emplace_back(4,5);// in-place objects create

    for(pair<int, int>p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;
    // cout<<p.second.second<<endl;
}