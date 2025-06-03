class Solution {
public:
    int dfs(int i, vector<int>& status, vector<int>& candies,
            vector<vector<int>>& keys, vector<vector<int>>& containedBoxes) {
        int ans = candies[i];
        status[i] = 0; 
        
        for (int k : keys[i]) {
            status[k] |= 1; 
            if (status[k] == 3)
                ans += dfs(k, status, candies, keys, containedBoxes);
        }
        for (int j : containedBoxes[i]) {
            status[j] |= 2; 
            if (status[j] == 3)
                ans += dfs(j, status, candies, keys, containedBoxes);
        }
        return ans;
    }
    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {
        const int n = status.size();
        int ans = 0;
        for (int i : initialBoxes) {
            status[i] |= 2;
            if (status[i] == 3)
                ans += dfs(i, status, candies, keys, containedBoxes);
        }
        return ans;
    }
};