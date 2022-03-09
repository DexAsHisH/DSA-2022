#include<bits/stdc++.h>
using namespace std;
int sum = 0;

void rev(int n){
    
    if(n <= 0){
        return;
    }
        

    int rem = n%10;
    sum = sum*10 + rem;
    int num = n/10;
    rev(num);    
}

int main(){
    rev(6969);
    cout<<sum<<"\n";
}