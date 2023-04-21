//Question: https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> array(nums.size());
        
        int i,c=1;
        for(i=0; i<n*2; i++){
            if(i<n){
                array[i*2] = nums[i];
            }
            else if(i>=n){
                array[c] = nums[i];
                c=c+2;
            }
        }
        return array;
    }
};
