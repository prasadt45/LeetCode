class Solution {
    private:
    static bool comp(pair<int , int>&a , pair<int , int>&b){
        return a.first>b.first ; 
     }
      static bool rcomp(pair<int , int>&a , pair<int , int>&b){
        return a.second < b.second; 
     }
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size()  ; 
        vector<pair<int , int>>mp ;
        for(int i =0 ; i<n ; i++){
            mp.push_back({nums[i] , i}) ; 
        }
        sort(mp.begin()  , mp.end() , comp) ; 
        vector<pair<int , int>>an(mp.begin() , mp.begin()+k) ; 
        sort(an.begin() , an.end() , rcomp) ; 
        vector<int>ans ; 
        for(auto it:an){
            ans.push_back(it.first) ; 
        }
        return ans ; 
    }
};