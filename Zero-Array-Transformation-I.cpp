class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> freq(n + 1, 0); 
        for (auto& q : queries) {
            int l = q[0], r = q[1];
            freq[l] += 1;
            if (r + 1 < n) {
                freq[r + 1] -= 1;
            }
        }
        for (int i = 1; i < n; i++) {
            freq[i] += freq[i - 1];
        }
        for (int i = 0; i < n; i++) {
            if (freq[i] < nums[i]) return false;
        }

        return true;
    }
};
