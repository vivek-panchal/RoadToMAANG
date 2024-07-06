class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s.length()!=goal.length()){
            return false;
        }
        if(s==goal){
            return true;
        }
        for(int i=0;i<n;++i){
            // rotate string by 1 place  , vivek -> ivek + v 
            if(s.substr(i,n-1)+s.substr(0,i)==goal){
                return true;
            }
        }
        return false;
        
    }
};
