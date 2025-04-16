#include<bits/stdc++.h>
using namespace std;
void Subseq(int i,int n,int a[],vector<int>&sub){
    if(i==n){
        for(auto i:sub){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    sub.push_back(a[i]);
    Subseq(i+1,n,a,sub);
    sub.pop_back();
    Subseq(i+1,n,a,sub);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter array elemnts";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>sub;
    Subseq(0,n,a,sub);
}