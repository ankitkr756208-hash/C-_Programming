#include<iostream>
#include<vector>
using namespace std;

//check if array is sorted or not using recursion
bool isSorted(vector<int>& arr,int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    //recursive call
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}



int main(){
    vector<int>arr={1,2,3,4,5,6};
    if(isSorted(arr,arr.size())){
        cout<<"Array is sorted"<<endl;
    }
    else {
        cout<<"Array is not sorted"<<endl;
    }

}

