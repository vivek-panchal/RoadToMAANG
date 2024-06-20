class Solution {
public:
    int solve(vector<int>&nums,int target){
        int n=nums.size();
        vector<int>prev(target+1,0);
        vector<int>curr(target+1,0);
        if(nums[0]==0){
            prev[0]=2;
        }else{
            prev[0]=1;
        }
        if(nums[0]!=0 && nums[0]<=target){
            prev[nums[0]]=1;
        }
        for(int i=1;i<n;i++){
            for(int k=0;k<=target;k++){
                int notPick=prev[k];
                int pick=0;
                if(nums[i]<=k){
                    pick=prev[k-nums[i]];
                }
                curr[k]=(pick+notPick);
            }
            prev=curr;
        }
        return prev[target];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum-target<0 || (sum-target)%2){
            return 0;
        }
        return solve(nums,(sum-target)/2);

    }
};
