class Solution {
    private:
    void f(int i  , int j , string ds , vector<string>&ans , int n){
        if(i==j && i==n){
            ans.push_back(ds) ; 
            return ;
        }

        if(ds.empty() || i==j || i<n ){
            f(i+1 , j , ds+\(\ , ans , n) ; 
        }

        if(j<i || i==n ){
            f(i , j+1 , ds+\)\ , ans , n) ; 
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans ; 
        f(0 , 0 , \\ , ans ,  n) ; 
        return ans ; 
        
    }
};