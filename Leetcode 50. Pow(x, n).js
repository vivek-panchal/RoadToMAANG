var myPow = function(x, n) {
    if (n===0){
        return 1;
    }
    if(n===1){
        return x;
    }
    if(n<0){
        return 1/myPow(x,-n);
    }
    
    // If n is even
    if((n&1) ===0 ){
        return myPow(x*x,n/2);
    }

    //n is odd
    return x* myPow(x*x,(n-1)/2);
};
