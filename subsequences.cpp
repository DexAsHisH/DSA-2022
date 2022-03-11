#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr,vector<int> ans,int n,int i){

if(i>n){
    
    for(auto it:ans){
        cout<<it<<" ";
    }cout<<endl;

    return;
}
ans.push_back(arr[i]);
solve(arr,ans,n,i+1);
ans.pop_back();

solve(arr,ans,n,i+1);
    
}

int main(){
    vector<int> arr = {1,2,3};

    vector<int> ans;

    int n = arr.size();

    solve(arr,ans,n-1,0);
    

}