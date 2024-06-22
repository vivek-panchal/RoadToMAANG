class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int minpri=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            minpri=min(minpri,prices[i]);
            maxpro=max(maxpro,prices[i]-minpri);
        }
        return maxpro;
    }
};
