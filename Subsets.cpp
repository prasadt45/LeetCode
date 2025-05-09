class Solution {
    private:
    void f(int ind , vector<int>&arr , vector<vector<int>>&ans  , vector<int>&nums){
        int n = nums.size() ; 
        if(ind>=n){
            ans.push_back(arr) ; 
            return ; 
        }
        arr.push_back(nums[ind]) ; 
        f(ind+1 , arr , ans , nums) ;
        arr.pop_back() ; 
        f(ind+1 , arr , ans , nums) ; 


    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size() ; 
        vector<vector<int>>ans ; 
        vector<int>arr ; 
        f(0 , arr  , ans ,  nums) ; 
        return ans ; 
    } 
};