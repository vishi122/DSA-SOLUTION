class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc=true;
        bool des=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                asc=false;
            }
            if(nums[i]<nums[i+1]){
                des=false;
            }
        }    
        return asc || des;
    }
};