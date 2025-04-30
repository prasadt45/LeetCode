class Solution {
    private: 
    int fd(int n){
        int cnt = 0 ; 
        if(n==0){
            return 1 ; 
        }
        while(n>0){
            
            int ld = n%10 ; 
            n = n/10 ; 
            cnt++  ; 
        }
        return cnt  ;
    }
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size() ;
        int cnt = 0 ; 
        for(int i = 0 ; i<n ; i++){
           int dc = fd(nums[i]) ; 
           if(dc%2==0){
            cnt++ ; 
           }
        }
      
     return cnt ;
    }
};