//Question: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int ui=0;
        for(i=1; i<nums.size(); i++){
            if(nums[i]!=nums[ui]){
                ui++;
                nums[ui] = nums[i];
                
            }
        }
        return ui+1;
    }
};
