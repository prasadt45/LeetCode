class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size() ; 
        int cnt  =0 ; 
        for(int i = 0 ; i<n ; i++){
            string w1 = words[i] ; 
            for(int j =  i+1 ; j<n ; j++){
                string w2 = words[j] ; 
                if(w2.length()<w1.length()) continue ; 
                string p = w2.substr(0 , w1.length()) ; 
                string s = w2.substr(w2.length() - w1.length()) ; 
                if(p==w1 && s==w1){
                    cnt++ ; 
                }
            }
        }
        return cnt  ; 
    }
};