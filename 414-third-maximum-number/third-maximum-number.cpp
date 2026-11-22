class Solution {
public:

    int thirdMax(vector<int>& nums) {
        long long f=LONG_MIN;
        long long s=LONG_MIN;
        long long  t=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>f){
                t=s;
                s=f;
                f=nums[i];
            }
            else if(nums[i]>s && nums[i]<f){
                t=s;
                s=nums[i];
            }
            else if(nums[i]>t && nums[i]<s){
                t=nums[i];
            }
        }
        if(t==LONG_MIN){
            return f;
        }
        else{
            return t;
        }
    }
};