class Solution {
    private:
    int f(int i , int j  , vector<vector<int>>&triangle , vector<vector<int>>&dp){
        int n = triangle.size() ; 
        int m = triangle[0].size() ;
        if(i==n-1){
            return triangle[n-1][j] ; 
        }
        if(dp[i][j]!=-1){
            return dp[i][j] ; 
        }
     
        int d = triangle[i][j] + f(i+1 , j   , triangle , dp) ; 
        int dd = triangle[i][j] + f(i+1 , j+1 , triangle , dp) ; 
        return dp[i][j] =  min(d , dd) ; 
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ; 
        int m = triangle[0].size() ;
        vector<vector<int>>dp(n  , vector<int>(n, -1)) ; 
        return f(0 , 0 , triangle , dp)  ; 
    }
};