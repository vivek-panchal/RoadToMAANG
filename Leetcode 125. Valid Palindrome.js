var isPalindrome = function(s) {
    s = s.replace(/[^a-zA-Z0-9]+/g, '').toLowerCase();
    let j = s.length;
    if(s.length == 0 || s.length ==1){
        return true;
    }

    if(s.charAt(0) == s.charAt(j-1)){
        return isPalindrome(s.slice(1,j-1));
    }
    return false;
};
