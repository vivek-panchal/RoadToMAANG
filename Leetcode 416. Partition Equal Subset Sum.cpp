class Solution {
public:
    bool solve (int n, int k,vector<int>&nums){
        vector<bool>prev(1e6,0);
        vector<bool>curr(1e6,0);

        prev[0]=true;
        curr[0]=true;
        prev[nums[0]]=true;

        for(int i=1;i<n;i++){
            for(int target=1;target<=k;target++){
                bool take=false;
                if(nums[i]<=target){
                    take=prev[target-nums[i]];
                }
                bool nottake=prev[target];
                curr[target]=take | nottake;
            }
            prev=curr;
        }
        return prev[k];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        if(n<=1){
            return false;
        }

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;

        return solve(n,target,nums);

    }
};
