class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>&nums,int index, int n){
        if(index>=n){
            ans.push_back(nums);
            return;
        }

        unordered_set<int>mp;
        for(int i=index;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                continue;
            }
            mp.insert(nums[i]);
            swap(nums[index],nums[i]);
            solve(nums,index+1,n);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        solve(nums,0,n);
        return ans;
    }
};
