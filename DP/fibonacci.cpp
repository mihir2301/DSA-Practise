#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp){
    if(n<=1)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main(){
    int a;
    cout<<"Enter the no.";
    cin>>a;
    vector<int>d(a+1,-1);
    cout<<f(a,d);
}