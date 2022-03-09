#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int size)
{

    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]> arr[1]){

        return false;
    }
    else{
        return isSorted(arr + 1, size - 1);
    }
}


int main(){

    int arr[] = {2,4,7,8,99,777};
    int size = 6;

    bool ans = isSorted(arr,size);
    
    if(ans){
        cout<<"is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }

}