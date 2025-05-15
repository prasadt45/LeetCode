class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        int n = words.size();
        if (n == 0) return ans;

        ans.push_back(words[0]);
        int lastGroup = groups[0];

        for (int i = 1; i < n; i++) {
            if (groups[i] != lastGroup) {
                ans.push_back(words[i]);
                lastGroup = groups[i];
            }
        }

        return ans;
    }
};
