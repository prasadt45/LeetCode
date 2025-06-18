class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mi = nums[0];
        int n = nums.size() ; 
        int mxp = 0 ; 
        for(int i = 1 ; i<n ; i++){
             mi = min(nums[i] , mi) ; 
            int dif = nums[i] - mi ; 
            if(dif<0){
                dif = 0 ; 
            }
            mxp = max(mxp , dif) ; 
        }
        return mxp ; 
    }
};