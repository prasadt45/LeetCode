class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ;  
        int cnt = 0  ; 
        int mi = nums[0] ; 
        for(int i = 1 ; i<n ; i++){
            int dif = nums[i]-mi ; 
            if(dif<=k){
                continue ; 
            }else{
               mi = nums[i] ; 
               cnt++ ; 
            }
        }
        return cnt+1 ; 

    }
};