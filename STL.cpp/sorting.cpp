#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    bool comparator(pair<int,int>p1, pair<int, int>p2){
        if(p1.second < p2.second) return true;
        else return false;
    }
    // vector<int>vec={1,2,3,4,5};
    // sort(vec.begin(),vec.end(),greater<int>());

    // for(int val :vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    vector<pair<int,int>>vec={{1,2},{2,3},{8,9}};

    sort(vec.begin(),vec.end(),comparator);
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
}