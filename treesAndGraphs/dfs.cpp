#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],int vis[],vector<int>ls){

    vis[node]=1;
    ls.push_back(node);
    for(auto i: adj[node]){
        if(!vis[i]){
            dfs(i,adj,vis,ls);
        }
    }
}
vector<int>dis(int v,vector<int>adj[]){
    int vis[v]={0};
    int start=0;
    vector<int>ls;
    dfs(start,adj,vis,ls);
}