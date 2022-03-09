#include<bits/stdc++.h>
using namespace std;
int sum = 0;

void rev(int n){

    if(n == 0){
        return;
    }

    int r = n%10;
    sum = sum*10 + r;
    rev(n/10);
}

int main(){
    rev(564);
    cout<<sum<<endl;
    
}