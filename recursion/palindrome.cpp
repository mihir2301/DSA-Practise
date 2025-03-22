#include<bits/stdc++.h>
using namespace std;
bool check(int i,int n,string s){
    if(i>=n/2)
    return true;
    if(s[i]!=s[n-i-1])
    return false;
    return check(i+1,n,s);
}
int main(){
    string s;
    cout<<"Enter a word";
    cin>>s;
    cout<<check(0,s.length(),s);
}