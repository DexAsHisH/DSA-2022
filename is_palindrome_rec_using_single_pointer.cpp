#include<bits/stdc++.h>
using namespace std;

bool solve(string str,int i,int n){
    if( i >= n/2){
        return true;
    }

    if(str[i] != str[n-i-1]){
        return false;
    }
    
    return solve(str,i+1,n);
}

int main(){
    string str = "madam";
    for(auto it:str){
        cout<<it<<" ";
    }cout<<"\n";
    
    int n = str.length();

    cout<<solve(str,0,n);
    cout<<"\n";
    for(auto it:str){
        cout<<it<<" ";
    }cout<<"\n";
cout<<"\n";
}