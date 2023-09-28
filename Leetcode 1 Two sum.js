// Using For loop
var twoSum = function(nums, target) {
    for(let i=0;i<nums.length;i++){
        for(let j=i+1;j<nums.length;j++){
            //logic
            if(nums[i]+nums[j]===target) return [i,j];
        }
    }
};

//using js object
var twoSum = function(nums, target) {
    var obj={};
    for(let i=0;i<nums.length;i++){
        var n=nums[i];

        if(obj[target-n]>=0){
            return [obj[target-n],i];
        }
        else{
            obj[n]=i;
        }
    }
};
