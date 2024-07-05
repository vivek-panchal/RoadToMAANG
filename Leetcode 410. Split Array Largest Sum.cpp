class Solution {
private:
    bool isPossibleToSpilitArray(vector<int> &nums, int mid, int m){
        int requiredSubarrayCount = 1, totalSum = 0;
        
        for(auto num : nums){
            if(num > mid) return false;
            
            if(num + totalSum > mid){
                requiredSubarrayCount++;
                totalSum = num;
            }
            else totalSum += num;
        }
        
        return requiredSubarrayCount <= m;
    }

public:
    int splitArray(vector<int>& nums, int m) {
        int low = 0, high = 0, ans = 0;
        
        for(auto num : nums){
            low = max(low, num);
            high += num;
        }
        
        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(isPossibleToSpilitArray(nums, mid, m)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        
        return ans;
    }
};
