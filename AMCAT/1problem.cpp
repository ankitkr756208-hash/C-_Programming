#include<bits/stdc++.h>
using namespace std;

int maxEnergy(vector<int>& ener){
    int n=ener.size();

    sort(ener.begin(),ener.end());

    long long  prd1=(long long )ener[0]*ener[1];
    long long  prd2=(long long )ener[n-1]*ener[n-2];

    if(prd1>prd2){
        return ener[0]+ener[1];
    }
    else {
        return ener[n-1]+ener[n-2];
    }

}



int main(){
    int ener_size;
    cin>>ener_size;
    vector<int>ener(ener_size);
    for(int i=0;i<ener_size;i++){
        cin>>ener[i];
    }
    cout<<maxEnergy(ener)<<endl;
}