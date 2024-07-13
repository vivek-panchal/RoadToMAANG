class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        int hash[26]={0};
        int maxFre = 0;

        while(right<n) {

            hash[s[right]-'A']++;
            if(hash[s[right]-'A']>maxFre){
                maxFre = hash[s[right]-'A'];
            }

            if((right-left+1)-maxFre>k) { 
                hash[s[left]-'A']--;
                left++;
            }

            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
