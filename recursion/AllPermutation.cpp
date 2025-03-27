#include<bits/stdc++.h>
using namespace std;
void Subseq(int ind,int n,int a[],vector<int>ds,vector<bool>flag){
    if(ds.size()==n){
        for(auto i:ds){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(flag[i]==true){
            flag[i]=false;
            ds.push_back(a[i]);
            Subseq(i,n,a,ds,flag);
            ds.pop_back();
            flag[i]=true;
        }
    }
}
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
   cout<<"Enter elements of array";
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   vector<bool>flag(n,true);
   vector<int>ds;
   Subseq(0,n,a,ds,flag);
}