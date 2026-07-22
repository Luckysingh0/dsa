class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        while(j<=s.length())
        {
            if(j==s.length() ||s[j]==' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
             j++;

        }
        return s;

    }
};