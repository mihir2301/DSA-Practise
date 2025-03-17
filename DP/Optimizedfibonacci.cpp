#include<bits/stdc++.h>
using namespace std;
int main(){
    int prev2=0;
    int prev=1;
    int n;
    cout<<"Enter the no.";
    cin>>n;
    for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<prev;
}