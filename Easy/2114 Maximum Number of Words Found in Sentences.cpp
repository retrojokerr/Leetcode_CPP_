//Question: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i,j;
        char sp=' ';
        
        vector<int> count(sentences.size());
        for(i=0; i<sentences.size(); i++){
            int c=1;
            string sent = sentences[i];
            for(j=0; j<sent.size(); j++){
                if(sent[j]==sp){
                    c++;
                }
            }
            count.push_back(c);
            
        }
        int maxCount=0;
        for(i=0; i<count.size(); i++){
            if(count[i]>maxCount){
                maxCount = count[i];
            }
        }
        return maxCount;
    }
};
