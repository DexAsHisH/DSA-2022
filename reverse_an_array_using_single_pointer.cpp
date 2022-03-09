#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int i,int n){
    if( i > n/2){
        return;
    }

    swap(arr[i],arr[n-i]);
    solve(arr,i+1,n);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<"\n";
    
    int n = arr.size()-1;
    solve(arr,0,n);

    for(auto it:arr){
        cout<<it<<" ";
    }cout<<"\n";
cout<<"\n";
}