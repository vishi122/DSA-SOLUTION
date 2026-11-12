class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long f=LONG_MIN;
        long s=LONG_MIN;
        long t=LONG_MIN;
        for(auto num : nums){
            if(num>f){
                
                t=s;
                s=f;
                f=num;
            }
            else if(num>s && num!=f){
                t=s;
                s=num;
            }
            else if(num>t && num!=s && num!=f){
                t=num;
            }
        }
        return (t == LONG_MIN) ? f : t;
    }
};