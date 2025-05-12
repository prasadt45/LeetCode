class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        set<int> un; 
        vector<int> nums;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i == j || j == k || i == k) continue;

                    int d1 = digits[i];
                    int d2 = digits[j];
                    int d3 = digits[k];
                    if (d1 != 0 && d3 % 2 == 0) {
                        int num = d1 * 100 + d2 * 10 + d3;
                        un.insert(num);
                    }
                }
            }
        }
        for (int num : un) {
            nums.push_back(num);
        }

        return nums;
    }
};
