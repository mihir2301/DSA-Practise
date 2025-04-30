#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int v,vector<int> adj[]){
    int vis[v]={0};
    vector<int>bfs;
    queue<int>q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto i:adj[node]){
            if(!vis[i]){
                q.push(i);
                vis[i]=1;
            }
        }
    }
}