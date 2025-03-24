#include<bits/stdc++.h>
using namespace std;
bool Subseq(int i,int n,int a[],vector<int>&sub,int k,int sum){
    if(i>=n){
        if(sum==k){
            for(auto j:sub){
                cout<<j<<" ";
            }
        return true;
        }else{
        return false;
    }}
    sum+=a[i];
    sub.push_back(a[i]);
    if(sum==k){
        for(auto j:sub){
            cout<<j<<" ";
        }
    return true;}
   
    if(Subseq(i+1,n,a,sub,k,sum))
    return true;
    sum-=a[i];
    sub.pop_back();
    if(Subseq(i+1,n,a,sub,k,sum))
    return true;
    return false;
}
int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>sub;
    int sum=0;
    bool b= Subseq(0,n,a,sub,k,sum);
    if(b==false)
    cout<<"no subsequence present";
}