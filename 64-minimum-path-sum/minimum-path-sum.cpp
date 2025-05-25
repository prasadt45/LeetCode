class Solution {
    private:
    int f(int i , int j  , vector<vector<int>>&grid , vector<vector<int>>&dp){
        
        if(i==0 && j==0){
            return grid[0][0] ; 
        }
        if(i<0 || j<0){
            return INT_MAX  ;
        }
        if(dp[i][j]!=-1){
            return dp[i][j] ; 
        }
        int lc =  f(i-1 , j ,  grid , dp) ; 
        int rc =     f(i , j-1 ,  grid , dp) ;
        int cst = INT_MAX ;  
        if(lc!=cst){
        lc = min(cst , lc +grid[i][j]); 
        }
        if(rc!=cst){
           rc =  min(cst , rc + grid[i][j]);
        }
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