class Solution {
    private:
    int f(int i , int p , vector<int>&nums , vector<vector<int>>&dp){
        int n = nums.size() ; 
        if(i==n){
            return 0 ; 
        }
        if(dp[i][p+1]!=-1){
            return dp[i][p+1]  ; 
        }
        int l = 0+f(i+1 , p , nums , dp) ; 
        if(p==-1 ||nums[i]>nums[p]){
            l = max(l , 1+f(i+1 , i , nums , dp) ) ; 
        }
        return dp[i][p+1] =   l ;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ; 
        vector<vector<int>>dp(n , vector<int>(n+1 , -1)) ; 
        return f(0 , -1 , nums, dp) ; 
    }
};