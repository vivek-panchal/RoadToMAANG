class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int start=i+1;
                int end=n-1;

                while(start<end){
                    if(nums[start]+nums[end]==-nums[i]){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);

                        ans.push_back(temp);
                        while(start<end && nums[start]==nums[start+1]){
                            start++;
                        }
                        while(start<end && nums[end]==nums[end-1]){
                            end--;
                        }
                        start++;
                        end--;
                    }
                    else if(nums[start]+nums[end]>-nums[i]){
                        end--;
                    }
                    else{
                        start++;
                    }
                }
            }
        }
        return ans;
    }
};
