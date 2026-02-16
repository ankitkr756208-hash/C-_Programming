#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int printArray(int *arr,int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            // cout<<"("<<st <<","<<end<<")";
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
       cout<<endl;
    }
}
void kaddanes(int *arr,int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum +=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum <0){
            currsum=0;
        }
    }
    cout<<"max subarry sum= "<<maxsum<<endl;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int n=5;
    printArray(arr,n);
    kaddanes(arr,n);
}