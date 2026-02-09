#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxsum=INT_MIN; // Initialize to the smallest integer
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n; end++){
            currsum +=arr[end];
            maxsum=max(maxsum,currsum);
            
        }
        
    }
    cout<<"Maximum Subarray Sum: "<<maxsum<<endl;   
}