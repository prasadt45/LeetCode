class Solution {
    //  private:
    // int f(int i , int b , vector<int>&prices , vector<vector<int>>&dp , int fee){
    //     int n = prices.size() ; 
    //     if(i==n){
    //         return 0 ; 
    //     }
    //     if(dp[i][b]!=-1){
    //         return dp[i][b] ; 
    //     }
    //     if(b==1){
    //         return dp[i][b] =  max(
    //             -prices[i]+f(i+1 , 0 , prices , dp , fee)  , 
    //             0+f(i+1 , 1 , prices , dp ,fee) 
    //         ) ; 
    //     }else{
    //         return dp[i][b] =  max(
    //            ( prices[i]-fee ) + f(i+1 , 1 , prices , dp , fee ) , 
    //             0+f(i+1 , 0 , prices , dp , fee) 
    //         );
    //     }
    // }
public:
    int maxProfit(vector<int>& prices, int fee) {
         int n = prices.size() ; 
        vector<vector<int>>dp(n+1 , vector<int>(2 , -1)) ; 
        dp[n][0] = 0 ; 
        dp[n][1] = 0 ; 
        for(int i = n-1 ; i>=0 ; i--){
            for(int b = 0 ; b<=1 ; b++){
                if(b==1){
                    dp[i][b] = max(
                         -prices[i]+dp[i+1][0]  , 
                          0+dp[i+1][1]
                    );
                }else{
                    dp[i][b] =  max(
                   ( prices[i]-fee ) + dp[i+1][1] , 
                   0+dp[i+1][0]
            );
                }
            }
        }
        return dp[0][1] ; 
    }
};