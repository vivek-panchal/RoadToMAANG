class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int length=0;
        int zerocnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zerocnt++; 
            }
            while(zerocnt>k){
                if(nums[left]==0){
                    zerocnt--;
                }
                left++;
            }
            length=max(length,i-left+1);
        }
        return length;
    }
};
