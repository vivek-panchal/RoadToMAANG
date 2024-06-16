class Solution {
public:
    vector<int>temp;
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target,int index){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(index>=candidates.size()){
            return;
        }
        if(target<0){
            return;
        }

        //Include
        temp.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index);

        //Exclude
        temp.pop_back(); //Backtrack
        solve(candidates,target,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve (candidates,target,0);
        return ans;
    }
};
