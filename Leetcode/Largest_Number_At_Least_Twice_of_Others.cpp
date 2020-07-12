class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxNumIndex = 0;

        if(nums.size() == 1)
            return 0;
        if(nums.size() < 1)
            return -1;

        for(int i=0;i<nums.size();i++) {
            if(nums[maxNumIndex] < nums[i])
                maxNumIndex = i;
        }

        for(int i=0;i<nums.size();i++){
            if((i != maxNumIndex) && nums[maxNumIndex] < (nums[i]*2))
                return -1;
        }
        return maxNumIndex;
    }
};
