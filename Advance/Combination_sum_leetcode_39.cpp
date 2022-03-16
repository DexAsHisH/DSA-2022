#include<bits/stdc++.h>
using namespace std;

void combinationSum(vector<int> arr,int index,int target,int size,vector<vector<int>> &ans,vector<int> &nums){

    if(index == size){

        if(target == 0){
            ans.push_back(nums);
        }

        return;

    }

    
    if(arr[index] <= target){
    nums.push_back(arr[index]);
    combinationSum(arr,index,target-arr[index],size,ans,nums);
    nums.pop_back();
    }

    combinationSum(arr,index+1,target,size,ans,nums);
}

int main(){
vector<vector<int>> ans;
vector<int> nums;
vector<int> arr = {2,3,6,7};
int target = 7;

combinationSum(arr,0,target,arr.size(),ans,nums);

for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
    }
 

}
