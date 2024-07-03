class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid =start+(end-start)/2;

        while(start<=end){
            if(nums[mid]==target){
                return true;
            }
            if((nums[mid]==nums[start]) && (nums[end]==nums[mid])){
                start++;
                end--;
            }
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]> target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }

            }
            else{
                if(target>=nums[mid] && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            
            mid =start+(end-start)/2;   
            
        }

        return false;
    }
};
