class Solution {
    private:
    bool f(int i ,  int s , int n , vector<int>&nums , vector<vector<int>>&dp){
         if(s==0){
            return true ; 
         }
         if(i==0){
            if(nums[0]==s){
                return true ; 
            }
                return false ; 
         }
         if(dp[i][s]!=-1){
            return dp[i][s] ; 
         }
         bool nt = f(i-1 , s , n , nums , dp) ; 
         bool t = false ; 
         if(s>=nums[i]){
            t = f(i-1 , s-nums[i] , n , nums , dp) ; 
         }
         return dp[i][s] =  nt||t ; 

    }
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
        vector<vector<int>>dp(n , vector<int>(as+1 , -1) ) ; 
        return f(n-1 , as , n , nums , dp) ; 

    }
};