class Solution {
public:
    bool isPossible(vector<int>& nums, int threshold,int mid){
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp+=(nums[i]/mid)+((nums[i]%mid)!=0);
        }
        if(temp<=threshold){
            return true;
        }

        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1;
        int end=INT_MAX-1;
        int ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(nums,threshold,mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
