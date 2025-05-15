#include<bits/stdc++.h>
using namespace std;
void digits(vector<int> v,vector<int>&ds,vector<vector<int>>&ans,vector<int>&flag){
    if(ds.size()==3){
        if(ds[2]%2==0&&ds[0]!=0)
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<v.size();i++){
        if(flag[i]==0){
        ds.push_back(v[i]);
        flag[i]=1;
        digits(v,ds,ans,flag);
        ds.pop_back();
        flag[i]=0;
        }
    }
}
int main(){
vector<int>v;
cout<<"Enter size of vector";
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
vector<vector<int>>ans;
vector<int>ds;
vector<int>flag(n,0);
digits(v,ds,ans,flag);
for(auto i : ans){
    for(auto t: i){
        cout<<t<<" ";
    }
    cout<<endl;
}
}