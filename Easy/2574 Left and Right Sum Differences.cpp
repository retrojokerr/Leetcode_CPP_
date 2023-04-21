//Question: https://leetcode.com/problems/left-and-right-sum-differences/description/

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer(nums.size());
        //vector<int> leftSum();
        //vector<int> rightSum();
        int i,j, lsum=0, rsum=0;
        for(i=0; i<nums.size(); i++){
            for(j=0;j<nums.size(); j++){
                if(j<i){
                    lsum+=nums[j];
                    
                }
                else if(j>i){
                    rsum+=nums[j];
                }
            }
            answer[i]=abs((lsum-rsum));
            lsum=0;
            rsum=0;
        }
        return answer;
    }
};
