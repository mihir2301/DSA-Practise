#include<bits/stdc++.h>
using namespace std;
void Subseq(int ind,int n,int a[]){
    if(ind==n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<n;i++){
        swap(a[i],a[ind]);
        Subseq(ind+1,n,a);
        swap(a[i],a[ind]);
    }
}
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int a[n];
    cout<<"Enter value in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Subseq(0,n,a);
}