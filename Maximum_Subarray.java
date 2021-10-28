class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0;
        int max = nums[0];
        
        for(int i = 0;i<nums.length;i++){
            if((sum < 0) && (nums[i] > sum)){
                sum = nums[i];
            }
            else{
                sum += nums[i];
            }
            if(max < sum ){
                max = sum;
            } 
        }
        return max;
    }
}
