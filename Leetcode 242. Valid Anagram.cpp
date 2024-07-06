class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();

        if(n!=m){
            return false;
        }

        vector<int> temp(26,0);

        for(int i=0;i<n;i++){
            temp[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            temp[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(temp[i]!=0){
                return false;
            }
        }
        return true;
    }
};
