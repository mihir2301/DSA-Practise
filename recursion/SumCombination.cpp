#include<bits/stdc++.h>
using namespace std;
void Subseq(int i,int n,int k,int sum,int a[],vector<int>&sub,set<vector<int>>&s){
    if(i>=n){
        if(sum==k){
            s.insert(sub);
            return;
        }
        return;
    }
    sum+=a[i];
    sub.push_back(a[i]);
    Subseq(i+1,n,k,sum,a,sub,s);
    sum-=a[i];
    sub.pop_back();
    Subseq(i+1,n,k,sum,a,sub,s);
}
int main(){
    int n,k;
    cout<<"Enter size of aaray";
    cin>>n;
    cout<<"Enter value of k";
    cin>>k;
    int a[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    set<vector<int>>s;
    int sum=0;
    vector<int>sub;
    Subseq(0,n,k,sum,a,sub,s);
    for(auto i:s){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}