class Solution {
    private:
    void f(int ind  , vector<int>&ds  , vector<int>&nums , vector<vector<int>>&ans){
        int n = nums.size() ; 
        ans.push_back(ds) ; 
        for(int i = ind ; i<n ; i++){
            if(i!=ind && nums[i]==nums[i-1]) continue ; 
            ds.push_back(nums[i]) ;
            f(i+1 , ds , nums , ans) ; 
            ds.pop_back() ; 
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size() ;
         sort(nums.begin() , nums.end()) ; 
         vector<vector<int>>ans ; 
         vector<int>ds ; 
         f(0 , ds , nums , ans) ; 
         return ans ; 
    } 
};