#include<bits/stdc++.h>
using namespace std;
bool val(int ind,int n,vector<vector<int>>g,int colors[],int i){
for(int k=0;k<n;k++){
    if(k!=ind&&g[k][ind]==1&&colors[ind]!=i)
    return false;
}
return true;
}
bool Subseq(int ind,int n,int m,int colors[],vector<vector<int>>g){
    if(ind==n){
        return true;
    }
    for(int i=0;i<m;i++){
        if(val(ind,n,g,colors,i)){
            colors[ind]=i;
            if(Subseq(ind+1,n,m,colors,g))
            return true;
        }
        colors[ind]=0;
    }
    return false;
}
int main(){
    int n;
    cout<<"no. of nodes";
    cin>>n;
    vector<vector<int>>g;
    cout<<"Enter graph elements";
    for(int i=0;i<n;i++){
        int t,c;
        cin>>t>>c;
        g[t][c]=1;
    }
    int M;
    cout<<"Enter no. of colors";
    cin>>M;
    int colors[n]={0};
    Subseq(0,n,M,colors,g);
}