class Solution {
public:
  int findl(string s , string t ){
    int len = min(s.size() , t.size()) ; 
    int i = 0 ; 
    while(i<len && s[i]==t[i]){
        
            i++ ; 
    
    }
    return i ; 
  }
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size() ;
        string ans = str[0] ;
        for(int i = 0 ; i<n ; i++){
            int len = findl(ans ,  str[i]) ; 
            ans = ans.substr(0 , len) ; 
        
        }
         
         return ans ; 
    }
};