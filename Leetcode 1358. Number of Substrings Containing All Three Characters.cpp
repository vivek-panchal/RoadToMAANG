class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        vector<int>lastseen(3,-1);
        int low=0, high=0, ans=0;
        while(high < n){
            lastseen[s[high]-'a'] = high;
            ans += (1+min({lastseen[0], lastseen[1], lastseen[2]}));
            high++;
        }
        return ans;
    }
};
