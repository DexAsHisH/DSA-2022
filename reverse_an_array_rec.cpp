#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int left,int right){

    if(left > right){
        return;
    }

    swap(arr[left],arr[right]);
    solve(arr,left+1,right-1);

}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    for(auto it:arr){
        cout<<it<<" ";
    }
    int n = arr.size();
    solve(arr,0,n-1);

    for(auto it:arr){
        cout<<it<<" ";
    }

}