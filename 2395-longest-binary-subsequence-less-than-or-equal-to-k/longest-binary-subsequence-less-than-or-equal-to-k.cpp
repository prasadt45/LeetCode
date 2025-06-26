class Solution {
public:
    int f(int i, int v, int sum, string &s, vector<vector<int>>& dp) {
        if (i < 0) return 0;
        if (dp[i][v] != -1) {
            return dp[i][v];
        }

        int nt = f(i - 1, v, sum, s, dp);
        int t = 0;

        if ((sum - (s[i] - '0') * pow(2, v)) >= 0) {
            t = 1 + f(i - 1, v + 1, sum - (s[i] - '0') * pow(2, v), s, dp);
        }

        return dp[i][v] = max(nt, t);
    }

    int longestSubsequence(string s, int k) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return f(n - 1, 0, k, s, dp);
    }
};