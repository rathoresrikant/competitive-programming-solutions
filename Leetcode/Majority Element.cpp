 int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int ans = nums[0];           // Let the first element be the majority element
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ans) count++;        // If the number repeats itself increase the count otherwise reduce the count
            else count --;
            if(count<=0){
                ans = nums[i];             
                count = 1;
            }
        }
        return ans;
    }
