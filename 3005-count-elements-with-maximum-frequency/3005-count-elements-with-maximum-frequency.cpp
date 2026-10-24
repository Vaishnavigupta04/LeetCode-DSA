class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = 0;
        for (int i : nums) {
            if (mp.find(i) != mp.end())
                mp[i]++;
            else
                mp[i] = 1;
            maxi = max(mp[i], maxi);
        }
        int count = 0;
        for (auto i : mp) {
            if (i.second == maxi)
                count += i.second;
        }
        return count;
    }
};