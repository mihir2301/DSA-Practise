#include<bits/stdc++.h>
using namespace std;
void rev(int l,int r,int a[]){
    if(l>=r)
    return;
    swap(a[l],a[r]);
    rev(l+1,r-1,a);
}
void print(int a[],int size){
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter size of the array";
    cin>>n;
    int a[n];
    cout<<"Enter elemrnts of array";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    rev(0,n-1,a);
    print(a,n);
}
