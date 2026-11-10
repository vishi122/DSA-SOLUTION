class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            arr[i]=sum;
        }
        return arr;
    }
};