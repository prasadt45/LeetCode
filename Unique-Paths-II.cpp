class Solution {
 
    private:
    int f(int n , int m , vector<vector<int>>&arr ,  vector<vector<int>>&dp){
        if(n==0 && m==0){
            return 1  ; 
        }
        if(n<0 || m<0){
            return 0 ; 
        }
        if(dp[n][m]!=-1){
            return dp[n][m] ; 
        }
        if(n>=0 && m>=0 && arr[n][m]==1){
            dp[n][m] = 0 ; 
            return 0  ; 
        }
        int l = f(n , m-1 ,arr , dp ) ; 
        int r = f(n-1 , m , arr, dp) ; 
        return dp[n][m] = l+r ; 


    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size() ; 
        int n =arr[0].size() ; 
         if (arr[0][0] == 1 || arr[m - 1][n - 1] == 1) return 0;

         vector<vector<int>>dp(m , vector<int>(n , -1)) ; 
        return f(m-1 , n-1 ,arr ,  dp) ; 
    }
};