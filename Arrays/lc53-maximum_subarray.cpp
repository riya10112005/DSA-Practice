class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currentsum = 0;
      int maxsum = nums[0];
      for(int i = 1; i<nums.size(); i++){
        currentsum += nums[i];
        if(currentsum > maxsum){
          maxsum = currentsum;
      }
        else if(currentsum < 0){
          currentsum = 0;
        }
      }
        return maxSum;
    }
};
