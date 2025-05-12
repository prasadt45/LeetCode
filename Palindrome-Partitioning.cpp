class Solution {
private:
    void f(string s, int ind, vector<string>& par, vector<vector<string>>& ans) {
        int n = s.size(); 
        if(ind == n){
            ans.push_back(par); 
            return;
        }
        for(int i = ind; i < n; i++){
            if(isp(s, ind, i)){
                par.push_back(s.substr(ind, i - ind + 1)); 
                f(s, i + 1, par, ans); 
                par.pop_back(); 
            }
        }
    }

    bool isp(string& s, int st, int e){
        while(st <= e){
            if(s[st] != s[e])
                return false; 
            st++; 
            e--; 
        }
        return true; 
    }

public:
    vector<vector<string>> partition(string s) {
        vector<string> par; 
        vector<vector<string>> ans; 
        f(s, 0, par, ans); 
        return ans; 
    }
};
