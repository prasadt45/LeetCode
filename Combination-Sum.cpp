class Solution {
    private:
    void f(int ind , vector<int>&arr  , vector<vector<int>>&ans , vector<int>&nums , int t ){
        int n = nums.size() ; 
        if(ind ==n){
            if(t==0){
                ans.push_back(arr) ; 
            }
                return ; 
        }
        if(nums[ind]<=t){
            arr.push_back(nums[ind]) ;
            f(ind , arr  , ans , nums , t-nums[ind] ) ; 
            arr.pop_back() ; 

        }
        f(ind+1 , arr , ans , nums ,t) ;

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size() ;
        vector<vector<int>>ans ; 
        vector<int>arr ; 

        f(0 , arr  , ans , nums ,target) ; 
        return ans ; 
    }
};