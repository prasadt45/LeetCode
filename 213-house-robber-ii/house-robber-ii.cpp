class Solution {
    private:
    int f(vector<int>&nums){
        int n = nums.size() ; 
        vector<int>dp(n+1 , -1 ) ; 
        dp[0]  =  nums[0] ; 
        for(int i = 1 ; i<n ; i++){
            int take = nums[i]  ; 
            if((i-2)>=0){
               take+=dp[i-2] ; 
            }
            int nt = dp[i-1] ; 

            dp[i] = max(take , nt) ; 

        }
        return dp[n-1] ; 
            }
public:
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1){
            return nums[0] ; 
        }
        vector<int>t1 , t2 ; 
         for(int i = 0  ;i<n ; i++){
            if(i!=0){
                t1.push_back(nums[i]) ; 
            }
            if(i!=n-1){
                t2.push_back(nums[i]) ; 
            }
         }
         return max(f(t1) , f(t2)) ;
    }
};