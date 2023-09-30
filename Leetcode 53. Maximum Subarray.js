var maxSubArray = function(nums) {
    let sum=0;
    let maxSum=nums[0];

    for(let i=0;i<nums.length;i++){
        sum+=nums[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;
};
