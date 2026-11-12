class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;

            }
            else{
                count++;
            }
        }
        for(int i=nums.size()-count;i<nums.size();i++){
            nums[i]=0;
        }
    }
};