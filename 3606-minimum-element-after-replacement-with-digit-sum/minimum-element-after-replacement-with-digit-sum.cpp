class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini =INT_MAX;
        for (int num : nums) {
            int r = 0;
            while (num > 0) {
                r += num % 10;
                num /= 10;
            }
            mini =min(mini, r);
        }
        return mini;
    }
};