class Solution {
public:
    bool compare(vector<int>&track, string &curr){
        vector<int>selfCheck(26,0);

        for(int i=0;i<curr.size();i++){
            if(selfCheck[curr[i]-'a']==1){
                return false;
            }
            selfCheck[curr[i]-'a']=1;
        }

        for(int i=0;i<curr.size();i++){
            if(track[curr[i]-'a']==1){
                return false;
            }
        }
        return true;
    }
    int solve(int i, vector<string>&arr, vector<int>&track,int len){
        if(i==arr.size()){
            return len;
        }

        string curr=arr[i];
        if(compare(track,curr)==false){
            return solve(i+1,arr,track,len);
        }
        else{
            //Take
            for(int j=0;j<curr.size();j++){
                track[curr[j]-'a']=1;
            }
            len += curr.size();

            int take= solve(i+1,arr,track,len);
            //backtrack
            for(int j=0;j<curr.size();j++){
                track[curr[j]-'a']=0;
            }
            len-=curr.size();

            //Not Take
            int notTake=solve(i+1,arr,track,len);

            return max(take,notTake);
        }
    }
    int maxLength(vector<string>& arr) {
        vector<int> track(26,0);
        return solve(0,arr,track,0);
    }
};
