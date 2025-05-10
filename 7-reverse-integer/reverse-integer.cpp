class Solution {
public:
    int reverse(int x) {
        double  rev = 0 ; 
        while(x!=0){
           double ld = x%10 ; 
            x=x/10 ; 
            rev = rev*10 + ld ; 
        }
        if(rev > INT_MAX || rev < INT_MIN){
            return 0 ; 
        }
       return rev ; 
    }
};