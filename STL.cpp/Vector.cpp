#include <iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec ={1, 2,3,4,5} ;
    // cout<< vec[0]<<endl;
//     vector<char> vec ={ 'a','b','c','d'};
//     cout <<"Size is :"<< vec.size() <<endl;

//     for(char i : vec){
//         cout << i <<endl;
      
//     }
//       vec.push_back(('m'));

vector<int>vec(4,8);//dynamic programing _ tabulation DP[]

// vec.push_back(1);
// vec.push_back(6);
// vec.push_back(3);
// vec.push_back(9);
// vec.emplace_back(9);
//  vec.pop_back();
cout<<vec.size()<<endl;//3
cout<<vec.capacity()<<endl;//4
for(int val : vec){
    cout<<val<<" ";
}
cout<<endl;
cout<<"val at idx 2 "<<vec[2]<<" or "<<vec.at(2)<<endl;
cout<<"back "<<vec.back()<<endl;
cout<<"front "<<vec.front ()<<endl;
// different function
vector<int>vec1={1,2,3,4};
vector<int>vec2(vec1);
for(int val : vec2){
    cout<<val<<" ";
}

}