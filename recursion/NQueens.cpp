#include<bits/stdc++.h>
using namespace std;
void Subseq(int n,int col,vector<int>&leftrow,vector<int>&lowercross,vector<int>&uppercross,vector<string>&board,vector<vector<string>>&ans){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0&&lowercross[row+col]==0&&uppercross[n-1+(col-row)]==0){
            leftrow[row]=1;
            lowercross[row+col]=1;
            uppercross[n-1+(col-row)]=1;
            board[row][col]='q';
            Subseq(n,col+1,leftrow,lowercross,uppercross,board,ans);
            board[row][col]='.';
            leftrow[row]=0;
            lowercross[row+col]=0;
            uppercross[n-1+col-row]=0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    vector<int>leftRow(n,0);
    vector<int>lowercross(2*n-1,0);
    vector<int>uppercross(2*n-1,0);
    int row=0;
    int col=0;
    Subseq(n,col,leftRow,lowercross,uppercross,board,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
}