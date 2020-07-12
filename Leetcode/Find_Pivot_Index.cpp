class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, index = -1;
        
        if(nums.size() == 0)
            return -1;
        if(nums.size() == 1)
            return 0;
        
        for(int elements: nums){
            sum += elements;
        }
        int leftSum = 0;
        int rightSum = sum-nums[0];
        
        for(int i=0;i<nums.size();i++) {
            if(i>0) {
                leftSum += nums[i-1];
                rightSum -= nums[i];
            }
            if(leftSum == rightSum) {
                index = i;
                break;
            }
        }
        return index;
    }
};
