class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long ans = 0 ; 
        int n = nums1.size() ;
        int m = nums2.size() ;
         int z1 = 0 ; 
         int z2 = 0 ; 
         for(int i = 0 ; i<n ; i++){
            if(nums1[i]==0){
                z1 =z1+1  ; 
                nums1[i]=1 ; 
            }
         }
         for(int i = 0 ; i<m ; i++){
            if(nums2[i]==0){
                z2 =z2+1  ; 
                nums2[i]=1 ; 
            }
         }
        
        
         long long  s1 = 0 ; 
         long long s2 = 0 ; 
         for(int i = 0 ; i<n ; i++){
            s1+=nums1[i] ; 
         }
         for(int i = 0 ; i<m ; i++){
            s2+=nums2[i] ; 
         }
          if(s1==s2){
            return s1  ; 
         }
          if(z1==0 &&  z2==0){
            return -1 ; 
         }
         long long mx = max(s1 , s2) ; 
         long long diff = abs(s1-s2) ; 

         if(s2>=s1 && (z1>=1)){
            ans = s2 ; 
            return ans ; 
         }else if(s1>=s2 && (z2!=0)){
            ans = s1 ; 
            return ans ; 
         }
         return -1 ; 

         
    }
};