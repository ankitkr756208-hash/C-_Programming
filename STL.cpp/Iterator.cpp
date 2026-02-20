#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    // vector<vector<int>> vv(10, vector<int>(10, -1));

    // for(int i=0;i<vv.size();i++){
    //     for(int j=0;j<vv[i].size();j++){
    //         cout<<vv[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
//    pair<int,string>p;
//     p={101,"Ankit"};
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;

// vector<pair<int,string>>vp;
// vp.push_back({1,"Ankit"});
// vp.push_back({1,"Aman"});
// vp.push_back({1,"Alok"});
// vp.push_back({1,"Anatr"});
// vp.push_back({1,"Ankit"});

// for(int i=0;i<=vp.size();i++){
//     pair<int , string>p;
//     p=vp[i];
//     cout<<p.first<<", "<<p.second<<endl;
// }

queue<pair<int,int>>q;
q.push({1,2});
q.push({1,2});
q.push({1,2});
q.push({1,2});

while(!q.empty()){
    pair<int,int>p=q.front();
    q.pop();
    cout<<p.first<<" ,"<<p.second<<endl;
}


}
