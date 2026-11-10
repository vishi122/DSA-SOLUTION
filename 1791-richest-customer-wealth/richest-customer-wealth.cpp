class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0;
        for(int i=0;i<accounts.size();i++){
            int current=0;
            for(int j=0;j<accounts[i].size();j++){
                current = current + accounts[i][j];
            }
            if(current>maxx){
                maxx=current;
            }
        }
        return maxx;
        
    }
};