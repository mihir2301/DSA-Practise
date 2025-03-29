#include<bits/stdc++.h>
using namespace std;
bool chrs(int n,int mid,int piles[],int hrs){
    int totalhrs=0;
    for(int i=0;i<n;i++){
        totalhrs+=(piles[i]+mid-1)/mid;
    }
    return totalhrs<=hrs;
}
void BinarySearch(int n,int hrs,int piles[]){
    int left=1;
    int right=*max_element(piles,piles+n);
    while(left<right){
        int mid=left+(right-left)/2;
        if(chrs(n,mid,piles,hrs)){
            right=mid;
        }else
        {
            left=mid+1;
        }
    }
    cout<<left;
}
int main(){
    int n;
    cout<<"Enter size of aaray";
    cin>>n;
    int piles[n];
    cout<<"Enter elemrnts in piles";
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    cout<<"Enter hours";
    int hrs;
    cin>>hrs;
    BinarySearch(n,hrs,piles);
}