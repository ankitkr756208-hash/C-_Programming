#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={3,4,2,5,1};
    int key=5;
    int found=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
        }

    }
    if(found !=-1){
        cout<<"Element found at index "<<found<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }



}