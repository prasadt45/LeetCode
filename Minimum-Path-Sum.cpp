class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<int>>dp(n  , vector<int>(m , 0)) ;
        for(int i = 0 ;i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(i==0 && j ==0){
                    dp[i][j] = grid[i][j] ; 
                }else{
                int lc = grid[i][j] ;
                int rc = grid[i][j] ; 
                if(i>0){
                 lc = lc + dp[i-1][j] ; 
                }else{
                    lc+=1e9; 
                }
                if(j>0){
                 rc = rc+ dp[i][j-1] ; 
                }else{
                    rc+=1e9;
                }
                dp[i][j] =  min(lc , rc) ; 
            }
            }
        } 
        return dp[n-1][m-1] ; 
    }
};