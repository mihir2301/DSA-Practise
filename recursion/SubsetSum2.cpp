#include<bits/stdc++.h>
using namespace std;
 void Subseq(int ind,int n,int sum,int a[],vector<int>&presub,vector<vector<int>>&sub){
    sub.push_back(presub);
    for(int i=ind;i<n;i++){
        if(i!=ind&&a[i]==a[i-1])
        continue;
        presub.push_back(a[i]);
        Subseq(i+1,n,sum,a,presub,sub);
        presub.pop_back();
    }
}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int k;
cout<<"Enter Target";
cin>>k;
int a[n];
cout<<"Enter array elements";
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<vector<int>>sub;
int sum=k;
vector<int>presub;
Subseq(0,n,sum,a,presub,sub);
for(auto i:sub){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}
}