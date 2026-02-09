#include<iostream>
#include<vector>
using namespace std;

int fib(int n,vector<int> dp){//memoization ->top-down approach
    //base case
    if(n==0 || n==1){
        return n;
    }
    //Look up
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= fib(n-1,dp)+fib(n-2,dp); //recursive call
    return dp[n];
}

int main(){

    int n=6;
    vector<int>dp(n+1,-1);
    cout<<"Fibonacci of "<<n<<" is "<<fib(n,dp)<<endl;
}