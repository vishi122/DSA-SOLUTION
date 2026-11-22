class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans(heights.size());
        int count=0;
        for(int i=0;i<heights.size();i++){
            ans[i]=heights[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(ans[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};