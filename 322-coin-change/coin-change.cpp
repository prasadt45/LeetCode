class Solution {
    private:
    int f(int i , vector<int>&arr , int k , vector<vector<int>>&dp){
        if(i==0){
            if(k%arr[i]==0 ){
                return k/arr[i] ; 
            }else{
                return 1e8 ; 
            }
        }
        if(dp[i][k]!=-1){
            return dp[i][k] ; 
        }
        int nt = 0 + f(i-1 , arr , k , dp) ;
        int t = INT_MAX ; 
        if(arr[i]<=k){
            t = 1+f(i , arr , k - arr[i] , dp)  ; 
        }
        return  dp[i][k] =   min(t , nt); 


    }
public:
    int coinChange(vector<int>& arr, int k) {
        int n = arr.size() ; 
        vector<vector<int>>dp(n , vector<int>(k+1 , -1));
        if(n==1){
            if(k%arr[0]!=0){
                return -1 ; 
            }
        }

       int ans =   f(n-1 , arr , k , dp) ; 
       if(ans == 100000000){
        return -1 ; 
       }
       return ans ; 
    }
};