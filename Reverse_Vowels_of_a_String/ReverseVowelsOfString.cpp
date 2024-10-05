class Solution {
public:
    string reverseVowels(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        bool ifivowel = false;
        bool ifjvowel = false;
        while(i < j)
        {
           if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
           {
               ifivowel = true;
           }
           else
           {
               i++;
           }
           if(tolower(s[j]) == 'a' || tolower(s[j]) == 'e' || tolower(s[j]) == 'i' || tolower(s[j]) == 'o' || tolower(s[j]) == 'u')
           {
               ifjvowel = true;
           }
           else
           {
               j--;
           }

           if(ifivowel == true && ifjvowel == true)
           {
               s[i] = s[i] + s[j];
               s[j] = s[i] - s[j];
               s[i] = s[i] - s[j];
               ifivowel = false;
               i++;
               ifjvowel = false;
               j--;
           }
        }
        return (s);
    }
};