
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        vector<char> v;

        for (auto it : mp) {
            v.push_back(it.first);
        }

        sort(v.begin(), v.end(), [&](char a, char b) {
            return mp[a] > mp[b];
        });

        string ans = "";

        for (int i = 0; i < v.size(); i++) {
            char ch = v[i];
            int count = mp[ch];

            for (int j = 0; j < count; j++) {
                ans += ch;
            }
        }

        return ans;
    }
};
