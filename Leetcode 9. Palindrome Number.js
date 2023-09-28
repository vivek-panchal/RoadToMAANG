var isPalindrome = function(x) {
    // *******Approach*****
    // convert x into string using tostring Function
    // convert this string into array using split function 
    // reverse this array using reverse function
    // convert this array into string using join  function
    // + using for convert string into numerical again 
    return x=== +x.toString().split("").reverse().join("");
};
