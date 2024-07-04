class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = -1; 
        int totalWeight = 0;
        int n=weights.size();

        for (int i=0;i<n;i++) {
            maxWeight = max(maxWeight, weights[i]);
            totalWeight = totalWeight + weights[i];
        }

        //here weight and total weight work as left and right pointer of binary search
        while (maxWeight < totalWeight) {
            int midWeight = maxWeight + (totalWeight - maxWeight) / 2;
            int daysNeeded = 1, currWeight = 0;
            for (int i=0;i<n;i++) {
                if (currWeight + weights[i] > midWeight) {
                    daysNeeded++;
                    currWeight = 0;
                }
                currWeight = currWeight + weights[i];
            }
            if (daysNeeded > days) {
                maxWeight = midWeight + 1;
            } else {
                totalWeight = midWeight;
            }
        }
        return maxWeight;
    }
};
