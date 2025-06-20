class Solution {
  private:
    int f(int i , int b , int c , vector<int>&prices , vector<vector<vector<int>>>&dp){
        int n = prices.size() ; 
        if(i==n) return 0 ; 
        if(c==0) return 0 ; 
        if(dp[i][b][c]!=-1){
            return dp[i][b][c] ; 
        }
        if(b==1){
            return dp[i][b][c] =  max(
                -prices[i] + f(i+1 , 0 , c , prices , dp) , 
                 0 + f(i+1 , 1 , c , prices , dp)
            ) ; 
        }else{
             return dp[i][b][c] =  max(
                prices[i] + f(i+1 , 1 , c-1 , prices , dp) , 
                 0 + f(i+1 , 0 , c , prices , dp)
            ) ; 
        }
    }

public:
    int maxProfit(int k, vector<int>& prices) {
       int n = prices.size() ; 
        vector<vector<vector<int>>>dp(n , vector<vector<int>>(2 , vector<int>(k+1 , -1))) ; 
        return f(0 , 1 , k , prices , dp) ;  
    }
};