//Question: https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0, index;
        if(nums[0]==target){
            index=i;
        }
        for(i=1; i<nums.size(); i++){
            if(nums[i]==target){
                index=i;
            }
            else if(target>nums[i-1]&&target<nums[i]){
                index=i;
            }
        }
        if(target<nums[0]){
                index=0;
            }
        if(target>nums[nums.size()-1]){
                index=nums.size();
        }
        return index;
    }
};
