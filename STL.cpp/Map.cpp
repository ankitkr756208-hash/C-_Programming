#include<iostream>
#include<map>
using namespace std;


int main(){
    map<string, int>m;
    m["tv"]=100;
    m["laptop"]=10;
    m["headphone"]=70;
    m["Tablet"]=7000;
    m["Watch"]=500;

    m.insert({"camera",25});
    for(auto p : m){
        cout<<p.first <<" "<<p.second<<endl;
    }
    cout<<"count = "<<m.count("laptop")<<endl;
    cout<<"price = "<<m["laptop"]<<endl;

    if(m.find("camera") !=m.end()){
        cout<<"found\n";
    }
    else {
        cout<<"not found\n";
    }
}