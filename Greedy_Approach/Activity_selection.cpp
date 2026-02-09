#include<iostream>
#include<vector>
using namespace std;

int maxActivities(vector<int> start,vector<int>end){
    //sort based on end time
    //A0 slected
    cout<< "Activities sorted by end time:" << endl;
    int count=1;
    int currEndTime=end[0];

    for(int i=1;i<=start.size();i++){
        if(start[i]>=currEndTime){//non overlapping
            cout<< "Activity " << i << " (Start: " << start[i] << ", End: " << end[i] << ")" << endl;
            count++;
            currEndTime=end[i];
        }
    }
    return count;
}

int main(){
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};

    cout<<"Maximum number of activities that can be performed is "<<maxActivities(start,end)<<endl;
}