class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size()-1;
        int ind1=-1;
        
        //Find the break-point, i: Break-point means the first index i from
        // the back of the given array where arr[i] becomes smaller than arr[i+1].
        for(int i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        //If such a break-point does not exist i.e. if the array is sorted in decreasing order,
        //the next permutation must be the first i.e. the permutation in increasing order.
        if(ind1<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            //Find the smallest number i.e. > arr[i] and in the right half 
            //of index i(i.e. from index i+1 to n-1) and swap it with arr[i].
            for(int j=n;j>ind1;j--){
                if(nums[j]>nums[ind1]){
                    swap(nums[ind1],nums[j]);
                    break;
                }
            }    
            //Reverse the entire right half(i.e. from index i+1 to n-1) of index i. 
            reverse(nums.begin()+ind1+1,nums.end());
        }
    }
};
