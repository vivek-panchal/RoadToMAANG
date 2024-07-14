class Solution {
public:
 int solve(vector<int>& nums, int k){
    int n = nums.size();
    int left = 0;
    int right = 0;
    long long int cnt = 0;
    map<int ,int > mpp;

    while (right<n){
        mpp[nums[right]]++;

        while(mpp.size()>k){
            mpp[nums[left]]--;
            if (mpp[nums[left]]==0) {
                mpp.erase(nums[left]);
            }
            left++;
        }
        cnt= cnt + (right-left+1);
        right++; 
    }
    return cnt;
 }
    int subarraysWithKDistinct(vector<int>& nums, int k) { 
        return solve(nums, k)-solve(nums, k-1);
    }
};
