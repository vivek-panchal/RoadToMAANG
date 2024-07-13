class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int left=0;
        int right =0;
        int n= s.size();
        int length=0;
        while(right<n){
            //if s[right] found in map we update the left
            if(mpp[s[right]]!=-1){
                left=max(mpp[s[right]]+1 , left);
            }
            // update the index of current character 
            mpp[s[right]]=right;
            // store the max of all length
            length=max(length,right - left +1);
            right++;
        }
        return length;
    }
};
