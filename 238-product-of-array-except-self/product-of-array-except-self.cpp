class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int n=nums.size();
        vector<int> arr(n,1);
        for(int i=0;i<nums.size();i++){
            arr[i]=p;
            p=p*nums[i];
        }
        int s=1;
        for(int i=n-1;i>=0;i--){
            arr[i]=arr[i]*s;
            s=s*nums[i];
        }
        return arr;
    }
};