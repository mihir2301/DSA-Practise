#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    cout<<fibonacci(n);
}