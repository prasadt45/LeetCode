class Solution {
    private:
    int f(int n , int m , vector<vector<int>>&dp){
        if(n==0 && m==0){
            return 1  ; 
        }
        if(n<0 || m<0){
            return 0 ; 
        }
        if(dp[n][m]!=-1){
            return dp[n][m] ; 
        }
        int l = f(n , m-1 , dp) ; 
        int r = f(n-1 , m , dp) ; 
        return dp[n][m] = l+r ; 


    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m , vector<int>(n , -1)) ; 
        return f(m-1 , n-1 , dp) ; 
    }
};