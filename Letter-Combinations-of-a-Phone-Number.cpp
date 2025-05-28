class Solution {
    void f(int i , string op , string digits , unordered_map<int, string>&mp , vector<string>&ans ){
        int n = digits.size() ; 
        if(i==n){
            ans.push_back(op) ;
            return ; 
        }
        int digit = digits[i] - '0'; 
        string cs = mp[digit] ; 
        for(int j = 0 ; j<cs.size() ; j++){
           op.push_back(cs[j]) ; 
           f(i+1 , op , digits , mp , ans) ; 
           op.pop_back() ; 
        }
    }
public:
    vector<string> letterCombinations(string digits) {
       unordered_map<int, string> mp = {
           {2, \abc\},
           {3, \def\},
           {4, \ghi\},
            {5, \jkl\},
            {6, \mno\},
           {7, \pqrs\},
           {8, \tuv\},
           {9, \wxyz\}

       };

        vector<string>ans ; 
        if(digits.size()==0){
            return  ans ;
        }
        f(0 , \\ ,digits , mp , ans ) ; 
       return ans ; 
    }
};