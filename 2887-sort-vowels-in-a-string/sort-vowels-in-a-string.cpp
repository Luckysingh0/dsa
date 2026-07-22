class Solution {
public:
    bool isvowel(char ch)
    {
         return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' ||
           ch == 'O' || ch == 'U';
    }
    string sortVowels(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(isvowel(s[i]))
            {
                temp+=s[i];
            }
        }
        sort(temp.begin(),temp.end());
        int i=0;
        int j=0;
        while(j<temp.length())
        {
            if(isvowel(s[i]))
            {
                s[i]=temp[j];
                j++;
            }
            i++;
        }
        return s;
    }
};