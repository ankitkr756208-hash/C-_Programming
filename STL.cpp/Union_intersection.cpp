#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<set>

using namespace std;
void printUnion(vector<int>arr1,vector<int> arr2){
    unordered_set<int> s;
    for(int el : arr1){
        s.insert(el);
    }
    for(int el : arr2){
        s.insert(el);
    }
    //print Union 
    for(int el : s){
        cout<<el<<" ";
    }
    cout<<endl;

}

void printIntersection(vector<int>arr1,vector<int>arr2){
    unordered_set<int> s;

    for(int el : arr1){
        s.insert(el);
    }
    for(int el : arr2){
        if(s.find(el) != s.end()){
            cout<<el<<" ";
        }
    }
    cout<<endl;
}



int main(){
    vector<int> arr1={4,3,2,5,6,7,3,4,2,1};
    vector<int> arr2={2,1,9};
    cout<<"union :";
    printUnion(arr1,arr2);

    cout<<"Intersection :";
    printIntersection(arr1,arr2);
}
