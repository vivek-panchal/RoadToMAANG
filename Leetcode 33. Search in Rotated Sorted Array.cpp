class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid =start+(end-start)/2;
     //in a sorted and rotaed array if we at mid then either firts or second half always sorted
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            // first half is sorted
            if(nums[start]<=nums[mid]){
                // target appear in first half
                if(nums[start]<=target && nums[mid]>= target){
                    end=mid-1;
                }
                //target appear in second half
                else{
                    start=mid+1;
                }

            }
            // first half is not sorted but second half is rorted
            else{
                //target appear in second half
                if(target>=nums[mid] && target<=nums[end]){
                    start=mid+1;
                }
                //target appear in first half
                else{
                    end=mid-1;
                }
            }
            
            mid =start+(end-start)/2;   
        }

        return -1;
        
    }
};
