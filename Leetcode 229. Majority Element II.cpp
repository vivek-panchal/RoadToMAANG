class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int ele1;
        int ele2;
        int count1=0;
        int count2=0;

        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                count1++;
            }
            else if(nums[i]==ele2){
                count2++;
            }
            else if(count1==0){
                ele1=nums[i];
                count1++;
                continue;
            }
            else if(count2==0){
                ele2=nums[i];
                count2++;
                continue;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1=count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                count1++;
            }
            if(nums[i]==ele2){
                count2++;
            }
        }

        if(count1>n/3){
            ans.push_back(ele1);
        }
        if(count2>n/3 && ele2!=ele1){
            ans.push_back(ele2);
        }

        return ans;

    }
};
