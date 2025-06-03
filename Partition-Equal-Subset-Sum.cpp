class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int as = 0 ; 
        int n = nums.size() ; 
        for(int i = 0 ; i<n ; i++){
            as+=nums[i] ; 
        }
        if(as%2!=0){
            return false ; 
        }
        as = as/2 ; 
        vector<vector<bool>>dp(n , vector<bool>(as+1 , false) ) ; 
        for(int i = 0 ; i<n ; i++){
            dp[i][0] = true ; 
        }
        if(nums[0]<=as){
          dp[0][nums[0]] = true ; 
        }
        for(int i = 1 ; i<n ; i++){
           for(int j = 1 ; j<=as ; j++){
            bool nt = dp[i-1][j] ; 
            bool t = false ; 
            if(nums[i]<=j){
                t = dp[i-1][j-nums[i]] ; 
            }
            dp[i][j] = t||nt ; 
           }
        }
        return dp[n-1][as] ; 

    }
};