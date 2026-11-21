class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=100;i++){
            freq[i]+=freq[i-1];
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int v=nums[i];
            if(v==0){
                ans[i]==0;
            }
            else{
                ans[i]=freq[v-1];
            }
        }
        return ans;
    }
};