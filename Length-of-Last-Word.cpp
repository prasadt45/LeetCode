class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt  =0 ;
        int precnt = 0 ; 
        int n = s.size() ;
        for(int i =0 ; i<n ; i++){
            if(s[i]==' '){
                cnt = 0 ;
            }else{
                cnt ++ ; 
                precnt=cnt ; 
            }
        }
        if(precnt>cnt){
            return precnt ; 
        }
        return cnt ; 
        
    }
};