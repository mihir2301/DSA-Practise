#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp,int w[]){
    if(n==0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int left;
    int right=INT_MAX;
    left=f(n-1,dp,w)+abs(w[n]-w[n-1]);
    if(n>1){
      right=f(n-2,dp,w)+abs(w[n]-w[n-2]);
    }
    return dp[n]=min(left,right);
}
int main(){
    int n;
    cout<<"Enter no of steps";
    cin>>n;
    cout<<"Enter weights";
    int w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    vector<int>dp(n,-1);
    cout<<f(n-1,dp,w);
}