//Question: ttps://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i;
        //vector<bool> result;
        vector<bool> result(candies.size());

        vector<int> temp = candies;
        for(i=0; i<candies.size();i++){
            temp[i]+=extraCandies;
            result[i] = isMax(candies, temp[i]);
        }
        return result;    
        
    }
    bool isMax(vector<int>& array, int key){
        for(int j=0;j<array.size(); j++){
            if(key<array[j]){
                return false;
            }
        }
        return true;
    }

};
