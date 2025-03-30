#include<bits/stdc++.h>
using namespace std;
bool CanPlaceCows(int mid,int a[],int cows,int n){
    int placedcow=1;
    int last=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-last>=mid){
            placedcow++;
            last=a[i];
        }
    }
    return placedcow>=cows;
}
void BinarySearch(int n,int cows,int a[]){
    int left=1;
    int right=a[n-1]-a[0];
    int ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(CanPlaceCows(mid,a,cows,n)){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout<<ans;
}
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int a[n];
    cout<<"Enter valuees of array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cows;
    cout<<"Enter no.of cows";
    cin>>cows;
    sort(a,a+n);
    BinarySearch(n,cows,a);
}