#include<bits/stdc++.h>
using namespace std;
bool bundle(int mid,int candies[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        count+=candies[i]/mid;
    }
    return count>=k;
}
void BinarySearch(int n,int k,int candies[]){
    int left=1;
    int result;
    int right=*max_element(candies,candies+n);
    while(left<=right){
        int mid=left+(right-left)/2;
        if(bundle(mid,candies,n,k))
       { result=mid;
        left=mid+1;}
        else{
        right=mid-1;}
    }
    cout<<result;
}
int main(){
    int n;
    cout<<"Enter size of aaray";
    cin>>n;
    int candies[n];
    cout<<"Enter elemrnts in candies";
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    cout<<"Enter no. of children";
    int k;
    cin>>k;
    BinarySearch(n,k,candies);
}