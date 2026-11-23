class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int intial=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            intial=intial+gain[i];
            maxi=max(maxi,intial);
        }
        return maxi;
    }
};