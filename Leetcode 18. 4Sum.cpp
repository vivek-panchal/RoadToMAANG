class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                
                if (j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }

                int start = j + 1;
                int end = n - 1;
                while (start < end) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[start];
                    sum += nums[end];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[start], nums[end]};
                        ans.push_back(temp);
                        start++; 
                        end--;

                        while (start < end && nums[start] == nums[start - 1]){
                            start++;
                        }
                        while (start < end && nums[end] == nums[end + 1]){
                            end--;
                        }
                    }
                    else if (sum < target){
                        start++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return ans;
    }
};
