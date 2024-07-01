class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);

        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;

       //To find the first position
        while(start<=end){
            if(nums[mid]==target){
                ans[0]=mid;
                end=mid-1;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }

        start=0;
        end=nums.size()-1;
        //To find the Last position
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                start=mid+1;
            }
             if(nums[mid]>target){
                end=mid-1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            
        }
        return ans;

    }
};
