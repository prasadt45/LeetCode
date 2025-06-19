class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size() ; 
        int pro = 0  ; 
        vector<vector<int>>dp(n+1 , vector<int>(2 , -1)) ; 
        dp[n][0] = 0 ; 
        dp[n][1] = 0 ; 
        for(int i = n-1 ; i>=0 ; i--){
            for(int buy = 0 ; buy<=1 ; buy++){
                if(buy==1){
                    pro = max(
                       -p[i] + dp[i+1][0] , 
                       0 + dp[i+1][1] 
                    ) ; 
                }else{
                    pro = max(
                        p[i] + dp[i+1][1] , 
                        0 + dp[i+1][0]
                    ) ; 
                }
                dp[i][buy] = pro ; 
            }
        }
        return dp[0][1] ; 
        
    }
};