#include<iostream>
#include<string>
using namespace std;
bool isPallidrome(char str[],int n){
    int st=0,end=n-1;
    while(st < end){
        if(str[st++] !=str[end--]){
            cout<<"Not a Pallidrome"<<endl;
            return false;
        }
    }
    cout<<"Valid Pallidrome"<<endl;
    return true;

}
int main(){
    char word[]="madam";
    isPallidrome(word,5);
}