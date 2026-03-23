//Leetcode
//Topic: Arrays

//I rememeber: Remove duplicates from a soted array.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
