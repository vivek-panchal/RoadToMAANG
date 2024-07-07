class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int result = 1;
        for(int i = 0; i < s.size(); i++) {
            
            // for odd length palindrome check
            int left = i;
            int right = i;
            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                left--; 
                right++;
            }
            // checking if this window is greater than the previous result
            if(right - left - 1 > result) {
                result = right - left - 1;
                start = left + 1;
            }
            
            // for even length palindrome check
            left = i;
            right = i + 1;
            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            // checking if this window is greater than the previous result
            if(right - left - 1 > result) {
                result = right - left - 1;
                start = left + 1;
            }
        }
        return s.substr(start, result);
    }
};
