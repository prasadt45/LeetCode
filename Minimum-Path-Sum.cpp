class Solution {
    private:
    int f(int i , int j  , vector<vector<int>>&grid , vector<vector<int>>&dp){
        int mod = 1e9+7 ; 
        if(i==0 && j==0){
            return grid[0][0] ; 
        }
        if(i<0 || j<0){
            return mod  ;
        }
        if(dp[i][j]!=-1){
            return dp[i][j] ; 
        }
        int lc =  f(i-1 , j ,  grid , dp) + grid[i][j]; 
        int rc =     f(i , j-1 ,  grid , dp)+grid[i][j] ;
       
        return dp[i][j] =  min(lc ,rc) ; 
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<int>>dp(n  , vector<int>(m , -1)) ;
        return f(n-1 , m-1, grid , dp) ; 
    }
};