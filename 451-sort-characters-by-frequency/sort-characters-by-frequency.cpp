class Solution {
public:
    string frequencySort(string s) {
        map<char , int>mp ; 
        int n =  s.size() ; 
        for(int i = 0 ; i<n ; i++){
            mp[s[i]]++ ; 
        }
        string ans = "";
       vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        for(auto it : vec){
            while(it.second--){
                ans+=it.first ; 
            }
        }

       return ans ; 
    }
};