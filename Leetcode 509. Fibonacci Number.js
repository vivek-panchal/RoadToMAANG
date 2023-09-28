// Loop Approach
var fib = function(n) {
    const nums=[0,1];
    for(let i=2;i<=n;i++){
        nums.push(nums[i-1]+nums[i-2])
    }
    return nums[n];
};

// Recurssive Approach
var fib = function(n) {
   if(n<=1){
       return n;
   }
   return fib(n-1)+fib(n-2);
};
