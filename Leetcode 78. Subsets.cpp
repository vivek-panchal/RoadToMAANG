class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void helper(vector<int>&nums,int n){
        if(n==nums.size()){
            ans.push_back(temp);
            return;
        }

       //not take
       helper(nums,n+1);
       //take
       temp.push_back(nums[n]);
       helper(nums, n+1); 
       temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};
