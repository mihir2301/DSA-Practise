#include<bits/stdc++.h>
using namespace std;
bool pal(int i ,string s, int ind){
    int flag=0;
   while(ind<=i){
    if(s[ind++]!=s[i--])
    return false;
   }
   return true;
}
void Subseq(int ind,int size,string s,vector<string>&sub,vector<vector<string>>&ans){
    if(ind==size){
        for(auto i:sub){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<size;i++){
        if(pal(i,s,ind)){
            sub.push_back(s.substr(ind,i-ind+1));
            Subseq(i+1,size,s,sub,ans);
            sub.pop_back();
        }
    }
}
int main(){
    string s;
    cout<<"Enter stirng";
    cin>>s;
    int size=s.size();
    vector<vector<string>>ans;
    vector<string>sub;
    Subseq(0,size,s,sub,ans);
}