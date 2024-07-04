class Solution {
public:
    bool canEatInTime(vector<int>& piles, int k, int h){
        long long int hours = 0;
        for(int i=0;i<piles.size();i++){
            int div = piles[i] / k;
            hours += div;
            if(piles[i] % k != 0) hours++;
            
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;  //1 -----> 1000000000 m
        int right = 1000000000;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(canEatInTime(piles, mid, h)){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
