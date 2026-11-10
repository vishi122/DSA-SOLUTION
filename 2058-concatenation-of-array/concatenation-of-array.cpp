class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size()*2;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=nums[i%nums.size()];
        }
        return arr;
    }
};