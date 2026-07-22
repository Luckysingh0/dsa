class Solution {
public:
    long long mod=1e9+7;
    int countHomogenous(string s) {
        int i = 0;
        long long res = 0;
        long long l = 1;
        while (i < s.length()) {

            if (i == 0)
                res += 1;
            else if (s[i] == s[i - 1]) {
                l += 1;
                res += l;
            } else {
                l = 1;
                res += l;
            }
            i++;
        }
        return res%(mod);
    }
};