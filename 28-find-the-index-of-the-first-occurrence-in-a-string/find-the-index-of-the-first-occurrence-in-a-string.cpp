class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i < n - m + 1; i++) {
            cout << i << ":" << endl;
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                cout << j << endl;
                j++;
            }
            if (j == m)
                return i;
        }
        return -1;
    }
};