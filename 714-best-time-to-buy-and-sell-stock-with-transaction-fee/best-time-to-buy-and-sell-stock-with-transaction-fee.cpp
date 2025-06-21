class Solution {
     private:
    int f(int i , int b , vector<int>&prices , vector<vector<int>>&dp , int fee){
        int n = prices.size() ; 
        if(i==n){
            return 0 ; 
        }
        if(dp[i][b]!=-1){
            return dp[i][b] ; 
        }
        if(b==1){
            return dp[i][b] =  max(
                -prices[i]+f(i+1 , 0 , prices , dp , fee)  , 
                0+f(i+1 , 1 , prices , dp ,fee) 
            ) ; 
        }else{
            return dp[i][b] =  max(
               ( prices[i]-fee ) + f(i+1 , 1 , prices , dp , fee ) , 
                0+f(i+1 , 0 , prices , dp , fee) 
            );
        }
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
         int n = prices.size() ; 
        vector<vector<int>>dp(n , vector<int>(2 , -1)) ; 
        return f(0 , 1 , prices , dp , fee) ; 
    }
};