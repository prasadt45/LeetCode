class Solution {
    private:
    int f(vector<int> &nums , int goal ){
        int n = nums.size() ; 
        int l = 0 ; 
        int r  = 0 ; 
        int s = 0 ; 
        int cnt = 0 ; 
        while(r<n){
            if(goal<0) return 0 ; 
            s+=nums[r] ; 
            while(s>goal){
                s= s- nums[l] ; 
                l++ ; 
            }
            cnt+=(r-l+1) ; 
            r++ ; 


        }
        return cnt ; 
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums , goal) -f(nums,goal-1) ;
    }
};