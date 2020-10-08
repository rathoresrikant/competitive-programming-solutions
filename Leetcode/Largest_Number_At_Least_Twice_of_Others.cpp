int largest;
        int second;
        if (nums.length == 1) return 0;
        if(nums[0] > nums[1]) {
            largest = 0;
            second= 1;
        }
        else {
            largest = 1;
            second = 0;
        }
        if (nums.length == 1) return 0;
        for(int i = 2; i < nums.length; i++) {
            if (nums[i] > nums[largest]) {
                second = largest;
                largest = i;
            } else if (nums[i] > nums[second]) {
                second = i;
            }
        }
        return nums[largest] >= nums[second] * 2 ? largest : -1;
