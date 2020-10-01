vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();     
        
        vector<int> output(n,0);     // Creating output array
        output[0] = 1;
       
        for(int i=1;i<n;i++){
            output[i] = nums[i-1] * output[i-1];      // Finding the product of all elements present on the left of a particular element
        }
        int r = 1;
      for(int i = n-1 ; i>=0 ; i--){                 // output array will contain the product of all elements present on the left and right of a element
          output[i]  = r *output[i];
          r = r*nums[i];
          
      }
        
        return output;
    }
