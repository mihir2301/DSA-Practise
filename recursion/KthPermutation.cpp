#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int k;
    cout<<"Enter position of Permutation";
    cin>>k;
    int a[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int fact=1;
    vector<int>nums;
    for(int i=1;i<n;i++){
        fact*=i;
        nums.push_back(i);
    }
    nums.push_back(n);
    k=k-1;
    string ans="";
    while(true){
        ans=ans+to_string(nums[k/fact]);
        nums.erase(nums.begin()+k/fact);
        if(nums.size()==0){
            break;
        }
        k=k%fact;
        fact=fact/nums.size();
    }
    cout<<ans;
}