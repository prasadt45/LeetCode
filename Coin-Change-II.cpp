class Solution {
public:
    int change(int target, vector<int>& arr) {
        int n = arr.size();
        vector<vector<unsigned long long>> dp(n, vector<unsigned long long>(target + 1, 0));
        for (int t = 0; t <= target; t++) {
            if (t % arr[0] == 0) {
                dp[0][t] = 1ULL;
            } else {
                dp[0][t] = 0ULL;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int t = 0; t <= target; t++) {
                unsigned long long notTake = dp[i - 1][t];
                unsigned long long take = 0ULL;
                if (arr[i] <= t) {
                    take = dp[i][t - arr[i]];
                }

                unsigned long long sum = notTake + take;
                dp[i][t] = (sum > INT_MAX) ? INT_MAX : sum;
            }
        }

        return static_cast<int>(dp[n - 1][target]);
    }
};
