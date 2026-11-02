class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int range=n*(n+1)/2;
        return range-total;
    }
};