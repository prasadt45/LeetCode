class Solution {
    private:
    string f(string &s){
        string ns = ""  ; 
        for(int i =0 ; i<s.size() ; i++){
            char ch= s[i] ; 
            ch++ ; 
            ns+=ch ; 
        }
        return ns ; 
    }
public:
    char kthCharacter(int k) {
        string s = "a" ; 
        while(s.size()<k){
            string ns = f(s) ; 
            s=s+ns ; 
        }
        return s[k-1] ; 
    }
};