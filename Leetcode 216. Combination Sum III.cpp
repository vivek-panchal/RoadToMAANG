class Solution {
public:
    vector<int> temp;
    vector<vector<int>> ans;
    void solve(int k,int n,int index){
        if(k==0){
            if(n==0){
                ans.push_back(temp);
            }
            return;
        }
        if(index>9){
            if(n==0 && k==0){
                ans.push_back(temp);
            }
            return;
        }

        //Take
        temp.push_back(index);
        solve(k-1,n-index,index+1);

        //backtrack
        temp.pop_back();

        //Not Take
        solve(k,n,index+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(k,n,1);
        return ans;
    }
};
