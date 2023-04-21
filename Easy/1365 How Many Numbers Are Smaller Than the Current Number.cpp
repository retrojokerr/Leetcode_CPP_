//Question: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());;
        vector<int> temp = nums;
        int i, j, c=0;
        for(i=0; i<nums.size(); i++){
            for(j=0; j<nums.size(); j++){
                if(temp[j]<nums[i]){
                    c++;
                }
            }
            result[i]=c;
            c=0;
        }
        return result;
    }
};
