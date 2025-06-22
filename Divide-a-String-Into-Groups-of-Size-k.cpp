class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size() ; 
        vector<string>ans ; 
        int ta = (k-(n%k))%k; 
       
        for(int i =0 ; i<ta ; i++){
            s+=fill ; 
        }
        
        for(int i =0 ; i<s.size() ; i+=k){
             ans.push_back(s.substr(i , k)) ; 

        }
        return ans ; 
    }
};