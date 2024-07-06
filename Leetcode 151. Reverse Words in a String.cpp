class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }

            if(i>=n){
                break;
            }

            // Now i points first character of word
            // Now we will find last character of word using j

            int j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }

            string temp= s.substr(i,j-i);
            if(ans.length()==0){
                ans=temp;
            }else{
                ans=temp + ' ' + ans;
            }
            i=j;
        }
        return ans;
    }
};
