class Solution {
public:
    int majorityElement(vector<int>& v) {
       int n = v.size() ; 
       int cnt = 0 ; 
       int ele = 0 ; 
       for(int i =0 ; i<n ; i++){
         if(cnt==0){
            cnt =1 ; 
            ele = v[i] ; 
         }else if(v[i]==ele){
            cnt++ ; 
         }else{
            cnt-- ; 
         }
       }
       int cn1 = 0 ; 
       for(int i = 0 ; i<n ; i++){
        if(v[i]==ele){
            cn1++ ; 
        }
       }
       if(cn1 > (n/2)){
        return ele ; 
       }
       return -1 ;
    }
};