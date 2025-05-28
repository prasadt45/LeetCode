class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        int mi = 1e9 ;
        vector<vector<int>>dp(n , vector<int>(m , -1)) ; 
        for(int j = 0 ; j<m ; j++){
            dp[0][j] = matrix[0][j] ; 
        }
        for(int i = 1; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                int u = matrix[i][j] + dp[i-1][j] ; 
                int ld = 1e9 ; 
                if(j>0){
                   ld = matrix[i][j] + dp[i-1][j-1]  ; 
                }
                int rd = 1e9 ; 
                if( i>0 && j+1<m){
                    rd = matrix[i][j] + dp[i-1][j+1] ; 
                }

                dp[i][j] = min(u , min(ld , rd)) ; 
            }
        }
        for(int j = 0 ; j<m ; j++){
            mi = min(mi , dp[n-1][j]) ; 
        }
        return mi ; 
        
    }
};