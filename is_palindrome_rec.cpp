#include<bits/stdc++.h>
using namespace std;

bool solve(string str,int left,int right){

    if(left > right){
        return true;
    }

    if(str[left] != str[right]){
        return false;
    }else{
        return solve(str,left+1,right-1);
    }
}

int main(){
  
  string str = "madam";
//   cout<<str.length();
cout<<solve(str,0,str.length()-1);


cout<<endl;
}