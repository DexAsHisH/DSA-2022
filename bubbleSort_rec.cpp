#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int left,int right){

    if(right==0 || right==1){
        return;
    }

    for(int i=0;i<right-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    solve(arr,left,right-1);
}

int main(){
    vector<int> arr = {9,2,7,4,14,6};
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<"\n";
    int n = arr.size();
    solve(arr,0,n-1);

    for(auto it:arr){
        cout<<it<<" ";
    }cout<<"\n";

}