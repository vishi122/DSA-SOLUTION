class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
            minn=min(minn,nums[i]);
        }
        int r;
        while(minn!=0){
            r=maxx%minn;
            maxx=minn;
            minn=r;
        }
        return maxx;
    }
};