#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
    // string str;
    // cout<<"Enter a string : ";
    // getline(cin,str);
    // int n=str.length();
    // int s=0,e=n-1;
    // while(s<e){
    //     swap(str[s],str[e]);
    //     s++;
    //     e--;
    // }
    // cout<<"Reversed string is : "<<str<<endl;

    //strin inbuilt function
   string str = "Ankit Kumar";
    reverse(str.begin(), str.end());//iterators
    cout << "Reversed string is : " << str << endl;




}