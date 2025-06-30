class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int mx = 0;
        for (auto it : mp) {
            if (mp.find(it.first + 1) != mp.end()) {
                mx = max(mx, it.second + mp[it.first + 1]);
            }
        }

        return mx;
    }
};
