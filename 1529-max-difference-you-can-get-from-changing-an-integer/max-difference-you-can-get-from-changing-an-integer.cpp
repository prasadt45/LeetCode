class Solution {
    int fmx(string s) {
        int mx = stoi(s);
        for (char d = '0'; d <= '9'; d++) {
            if (d == '9') continue;
            string temp = s;
            for (auto& ch : temp) {
                if (ch == d) ch = '9';
            }
            mx = max(mx, stoi(temp));
        }
        return mx;
    }

    int fmi(string s) {
        int mi = stoi(s);
        char f = s[0];

        if (f != '1') {
            string temp = s;
            for (auto& ch : temp) {
                if (ch == f)  {
                    ch = '1';
                }
            }
            mi = min(mi, stoi(temp));
        } else {
            for (int i = 1; i < s.size(); i++) {
                if (s[i] != '0' && s[i] != '1') {
                    char t = s[i];
                    string temp = s;
                    for (auto& ch : temp) {
                        if (ch == t) ch = '0';
                    }
                    mi = min(mi, stoi(temp));
                    break; 
                }
            }
        }

        return mi;
    }

public:
    int maxDiff(int num) {
        string s = to_string(num);
        int mx = fmx(s);
        int mi = fmi(s);
        return mx - mi;
    }
};
