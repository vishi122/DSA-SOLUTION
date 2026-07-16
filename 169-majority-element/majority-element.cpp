class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int cnt = 0;
        // int m = 0;

        // for (int x : nums) {
        //     if (cnt == 0) {
        //         m = x;
        //     }

        //     if (m == x) {
        //         cnt++;
        //     } else {
        //         cnt--;
        //     }
        // }

        // return m;
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        n=n/2;
        for(auto x : m){
            if(x.second>n){
                return x.first;
            }
        }
        return 0;
    }
};