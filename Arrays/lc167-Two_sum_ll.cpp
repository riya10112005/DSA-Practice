"""
  Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
"""

  class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                return{left+1, right+1};
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return{}; 
    }
};
