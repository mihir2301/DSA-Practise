#include<bits/stdc++.h>
using namespace std;
void Subseq(int i,int j,int n,int a[][4],int visited[][4],int Di[],int Dj[],string s){
    if((i==n-1)&&(j==n-1)){
        cout<<s<<endl;
    }
    string p="DLRU";
    for(int k=0;k<n;k++){
        int ipos=i+Di[k];
        int jpos=j+Dj[k];
        if(ipos>=0&&jpos>=0&&ipos<n&&jpos<n&&visited[ipos][jpos]!=1&&a[ipos][jpos]==1){
            visited[ipos][jpos]=1;
            s=s+p[k];
            Subseq(ipos,jpos,n,a,visited,Di,Dj,s);
            visited[ipos][jpos]=0;
            if(s.length()!=0){
                s.pop_back();
            }
        }
    }
}
int main(){
    int a[4][4]={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int Di[4]={+1,0,0,-1};
    int Dj[4]={0,-1,1,0};
    int visited[4][4]={0};
    string s="";
    Subseq(0,0,4,a,visited,Di,Dj,s);
}