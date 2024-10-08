#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
    void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[i], nums[index]);
            solve(nums, index + 1, ans);
            //backtraking
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        if(nums.size() == 0){
            return ans;
        }

        int index = 0;

        solve(nums, index, ans);

        return ans;
    }
};

int main(){
    
    return 0;
}