class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size() ; 
        vector<vector<vector<int>>>dp(n+1 , vector<vector<int>>(2 , vector<int>(k+1 , 0))) ; 
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<=1 ; j++){
                dp[i][j][0] = 0 ; 
            }
        }
        for(int i = 0 ; i<=1 ; i++){
            for(int j = 0 ; j<=k ; j++){
               dp[n][i][j] = 0 ; 
            }
       }

       for(int i = n-1 ; i>=0 ; i--){
        for(int j = 0 ; j<=1 ; j++){
            for(int c = 1 ; c<=k ; c++){
                if(j==1){
                        dp[i][j][c] = max(
                            -prices[i] + dp[i+1][0][c] , 
                            0 + dp[i+1][1][c] 
                        ) ; 
                    }else{
                        dp[i][j][c] = max(
                            prices[i] + dp[i+1][1][c-1] , 
                            0+dp[i+1][0][c] 
                        ); 
                    }
            }
        }
       }
       return dp[0][1][k] ; 
    }
};