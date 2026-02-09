#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr,int tar){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(tar>arr[mid]){
            st=mid + 1;//move to right half

        }
        else if(tar<arr[mid]){
            end=mid -1;//move to left half
        }
        else {
            return mid;
        }
    }
    return -1;

}

int recBinarySearch(vector<int>& arr,int tar,int st,int end){
    if(st <=end){
        int mid = st + (end - st)/2;
        if(tar> arr[mid]){
            return recBinarySearch(arr,tar,mid +1,end);
        }
        else if(tar < arr[mid]){
            return recBinarySearch(arr,tar,st,mid-1);
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int tar1=9;

    cout<<binarySearch(arr,tar1)<<endl;
    vector<int> arr2={-1,0,3,5,9,12};
    int tar2=0;
    cout<<binarySearch(arr2,tar2)<<endl;
    return 0;
    recBinarySearch(arr,tar1,0,arr.size()-1);
    
}