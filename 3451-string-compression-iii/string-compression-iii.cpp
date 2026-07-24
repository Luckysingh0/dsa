class Solution {
public:
    string compressedString(string word) {
        int i = 0;
        int j = 1;
        int count = 1;
        string comp = "";

        while (j < word.length()) {

            if (word[j] == word[i] && count < 9) {
                count++;
                j++;
            }
            else {
                comp += to_string(count);
                comp += word[i];

                i = j;
                j++;
                count = 1;
            }
        }

        comp += to_string(count);
        comp += word[i];

        return comp;
    }
};