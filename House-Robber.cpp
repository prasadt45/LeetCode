class Solution {
public:
    int rob(vector<int>& nums) {
         int n =nums.size() ; 
        vector<int>dp(n , -1) ; 
        dp[0] = nums[0] ;
        int ne = 0 ; 
        for(int i = 1 ; i<n ; i++){
            int p  = 0 ; 
            if((i-2)<0){
                p =  nums[i] ; 
            }else{
             p = nums[i] + dp[i-2]  ; 
            }
            int np = dp[i-1] ; 
            dp[i] = max(p , np) ; 
        }
        return dp[n-1] ; 
    }
};