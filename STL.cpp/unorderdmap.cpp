#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string, int>m;

    // m.emplace("tv",234);
    // m.emplace("watch",23);
    // m.emplace("fridge",250);
    // m.emplace("laptop",239);

    // for(auto p: m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    m["china"]=150;
    m["india"]=150;
    m["US"]=50;
    m["italy"]=10;
    for(pair<string,int> country :m){
        cout<<country.first <<", "<<country.second<<endl;
    }
    m.erase("india");

    if(m.count("india")){
        cout<<"Nepal exist\n";
    }
    else {
        cout<<"Nepal doesn't exist \n";
    }
}