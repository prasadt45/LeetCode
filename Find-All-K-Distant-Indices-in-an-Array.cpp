class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size() ; 
        vector<int>ans ; 
        int r = 0 ; 
        for(int i =0 ; i<n ; ++i){
            if(nums[i]==key){
             
                int l = max(r , i-k ) ;
                 r = min(i+k , n-1 )+1 ; 
                for(int j = l ; j<r ; ++j){
                    ans.push_back(j) ; 
                } 
            }
        }
        return ans ; 
    }
};
