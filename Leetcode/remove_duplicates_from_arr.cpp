class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }
     int previous=0;
    for(int current=1;current<nums.size();current++){
        if(nums[previous]!=nums[current]){
            previous++;
            nums[previous]=nums[current];
        }
    }
        return previous+1;
    }
};