class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        if(n==1) return false;
        for(int i=0;i<n; i++){
            char ch=s[i];
            if((s[i]=='(') || (s[i]=='{') || (s[i]=='[')){
                st.push(ch);
            }
            else if(!st.empty()){
                if((s[i]==')' && st.top()=='(') || (s[i]=='}'&& st.top()=='{') || (s[i]==']' && st.top()=='[')){
                    st.pop();
                } else return false;

            } else return false;
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
