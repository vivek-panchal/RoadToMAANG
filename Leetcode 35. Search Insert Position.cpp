class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        
        int ans=n;
        
        while(start<=end){
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
                
            mid=start+(end-start)/2;  
        }
        return ans;
    }
};
