//Question: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i, j,sum=0, max_wealth=0;
        vector<int> wealth;
        for (i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum+=accounts[i][j];
            }    
            wealth.push_back(sum);
            sum=0;
        }
        for(i=0; i<wealth.size(); i++)
        {
            if(wealth[i]>max_wealth){
                max_wealth=wealth[i];
            }
        }
        return max_wealth;
    }
};
