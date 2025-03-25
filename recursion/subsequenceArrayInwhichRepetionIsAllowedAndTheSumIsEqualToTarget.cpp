#include<bits/stdc++.h>
using namespace std;
void Subseq(int i,int n,int sum,int a[],vector<int>&presub,vector<vector<int>> &sub){

    if(i==n){
        if(sum==0){
            sub.push_back(presub);
            return;
        }
        return;
    }
    if(sum>=a[i]){
        presub.push_back(a[i]);
        sum-=a[i];
        Subseq(i,n,sum,a,presub,sub);
        presub.pop_back();
        sum+=a[i];
    }
    Subseq(i+1,n,sum,a,presub,sub);
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