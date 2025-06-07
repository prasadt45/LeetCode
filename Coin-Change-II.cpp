class Solution {
    private:
    int f(int i , vector<int>&arr , int target , vector<vector<int>>&dp){
        if(i==0){
            int dif = target % arr[0] ; 
            if(target % arr[0] ==0 ){
                return 1   ; 
            }else{
                return 0 ; 
            }
        }
        if(dp[i][target] != -1){
           return dp[i][target] ; 
        }

        int nt = f(i-1 , arr , target , dp) ; 
        int t = 0 ; 
        if(arr[i]<=target){
            t = f(i , arr ,  target  - arr[i] , dp) ; 
        }
        return  dp[i][target] =  t+nt ; 
    }
public:
    int change(int target, vector<int>& arr) {
        int n = arr.size() ; 
        vector<vector<int>>dp(n , vector<int>(target+1 , -1)) ; 
        return f(n-1 , arr , target , dp) ; 

        
    }
};