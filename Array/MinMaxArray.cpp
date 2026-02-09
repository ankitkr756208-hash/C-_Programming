#include<iostream>
#include<climits>
using namespace std;


int main(){
    int nums[]={1,2,3,4,-5};
    int sz=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for(int i=0;i<sz;i++){
        // if(nums[i]<smallest){
        //     smallest=nums[i];
        // }
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<"Smallest element is : "<<smallest<<endl;
    cout<<"largest element is : "<<largest<<endl;

}