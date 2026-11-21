class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxright= -1;
        int n= arr.size();
        int r=n-1;
        vector<int> ans(arr.size());
        while(r>=0){
            ans[r]=maxright;
            maxright=max(maxright,arr[r]);
            r--;
        }
        return ans;
    }
};