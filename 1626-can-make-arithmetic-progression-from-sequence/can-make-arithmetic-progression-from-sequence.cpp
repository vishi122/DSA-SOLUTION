class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int> ans(arr.size());
        sort(arr.begin(),arr.end());
        int j=0;
        for(int i=1;i<arr.size();i++){
            ans[j]=(arr[i]-arr[i-1]);
            j++;
        }
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i]!=ans[i-1]){
                return false;
            }
        }
        return true;
    }
};