#include<bits/stdc++.h>
using namespace std;
void BinarySearch(int n,int a[]){
    if(n==1){
        cout<<a[0];
        return;
    }
    if(a[0]>a[1]){
        cout<<a[0];
        return;
    }
    if(a[n-1]>a[n-2]){
        cout<<a[n-1];
        return;
    }
    int left=1;
    int right=n-2;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
        cout<<a[mid];
        return;}
        if(a[mid]>a[mid-1])
        left=mid+1;
        else right=mid-1;
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<"Enter array elemrnts";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BinarySearch(n,a);
}