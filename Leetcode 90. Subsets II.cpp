class Solution {
public:
    void solve(vector<int>&nums,vector<int>&temp,vector<vector<int>> &ans,int index){
        if(index>=nums.size()){
            ans.push_back(temp);
            return;
        }

        //take
        temp.push_back(nums[index]);
        solve(nums,temp,ans,index+1);

        //Backtrack
        temp.pop_back();

        //not take
        while(index+1<nums.size() && nums[index]==nums[index+1]){
            index++;
        }
        solve(nums,temp,ans,index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>> ans;
        solve(nums,temp,ans,0);
        return ans;
    }
};
