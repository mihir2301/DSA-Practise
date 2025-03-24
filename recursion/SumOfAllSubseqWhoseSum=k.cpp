#include<bits/stdc++.h>
using namespace std;
int Subseq(int i,int n,int a[],int s,int k){
    if(i>=n){
        if(s==k)
        return 1;
        else return 0;
    }
    s+=a[i];
    int l=Subseq(i+1,n,a,s,k);
    s-=a[i];
    int r=Subseq(i+1,n,a,s,k);
    return l+r; 
}
int main(){
    int n,k;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of k";
    cin>>k;
    cout<<"Enter array elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    cout<<Subseq(0,n,a,s,k);
}