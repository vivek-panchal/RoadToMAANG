class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        if(n==0){
            return ans;
        }
        sort(strs.begin(),strs.end());
        string start=strs[0];
        string end=strs[n-1];
        for(int i=0;i<start.length();i++){
            if(start[i]==end[i]){
                ans=ans+start[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
