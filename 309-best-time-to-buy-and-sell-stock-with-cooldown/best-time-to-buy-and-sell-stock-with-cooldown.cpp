class Solution {
    private:
    int f(int i , int buy ,  int pro , vector<int>&p , vector<vector<int>>&dp){
        int n = p.size() ; 
        if(i>=n){
            return 0 ; 
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy] ; 
        }
        if(buy==1){
            pro = max(
                -p[i]+f(i+1 , 0 , pro , p , dp) ,
                0 + f(i+1 , 1, pro , p , dp) 
            ) ; 
        }else{
            pro = max(
                p[i]+f(i+2  , 1 , pro , p , dp) , 
                0+f(i+1 , 0 , pro , p , dp) 
            ) ; 
        }
        return dp[i][buy] =  pro ; 


    }
public:
    int maxProfit(vector<int>& p) {
        int n = p.size() ; 
        int pro = 0  ; 
        vector<vector<int>>dp(n+1 , vector<int>(2 , -1)) ; 
        return f(0 , 1 ,  pro , p , dp) ; 
    }
};