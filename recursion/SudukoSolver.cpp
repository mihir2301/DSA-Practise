#include<bits/stdc++.h>
using namespace std;
bool isValid(int k,int row ,int col,vector<vector<int>>suduko){
    for(int i=0;i<9;i++){
        if(suduko[row][i]==k)
        return false;
        if(suduko[i][col]==k)
        return false;
        if(suduko[3*(row/3)+i/3][3*(col/3)+i%3]==k)
        return false;
    }
    return true;
    }
bool Subseq(vector<vector<int>>&suduko){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(suduko[i][j]==0){
                for(int k=1;k<=9;k++){
                    if(isValid(k,i,j,suduko)){
                        suduko[i][j]=k;
                        if(Subseq(suduko));{
                            return true;
                        }
                        suduko[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    vector<vector<int>>suduko={
    {5, 3, 0, 6, 7, 8, 9, 1, 2},
    {6, 0, 2, 1, 9, 5, 3, 4, 8},
    {1, 9, 8, 3, 4, 0, 5, 6, 7},
    {8, 5, 9, 7, 6, 1, 4, 2, 0},
    {4, 2, 6, 8, 5, 3, 7, 9, 1},
    {7, 1, 3, 9, 0, 4, 8, 5, 6},
    {9, 6, 1, 5, 3, 7, 2, 8, 4},
    {2, 8, 7, 4, 1, 9, 6, 3, 5},
    {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };
    if(Subseq(suduko)){
        for(auto i:suduko){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Suduko cant be solved";
}