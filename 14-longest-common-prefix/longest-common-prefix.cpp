class Solution {
    private:
    int f(string a , string b){
        int n = min(a.size() , b.size()) ; 
        int i = 0 ; 
        while(i<n && a[i]==b[i] ){
            
                i++ ; 
            
        }
        return i ; 
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size() ; 
        string ans = strs[0] ; 
        for(int i = 0  ;i<n ; i++){
          int ind = f(ans , strs[i]) ; 
          ans = ans.substr(0 , ind) ; 
        }
        return ans ; 
        
    }
};