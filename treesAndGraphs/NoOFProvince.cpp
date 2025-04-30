#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int>adj[],int vis[]){
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it])
        dfs(it,adj,vis);
    }
}

int main(){
    int n,m;
    cout<<"Enter no. of nodes and edges \n";
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int v,p;
        cin>>v>>p;
        adj[v].push_back(p);
        adj[p].push_back(v);
    }
    int vis[n+1]={0};
    int c=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,adj,vis);
            c++;
        }
    }
    cout<<"no. of province "<<c;
}