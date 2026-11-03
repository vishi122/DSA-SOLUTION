class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;
        for(int i=0;i<deck.size();i++){
            freq[deck[i]]++;
        }
        int g=0;
        for(auto it : freq){
            g=gcd(g,it.second);
        }
        return g>1;
    }
    int gcd(int a , int b){
        while(b!=0){
            int temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }

};