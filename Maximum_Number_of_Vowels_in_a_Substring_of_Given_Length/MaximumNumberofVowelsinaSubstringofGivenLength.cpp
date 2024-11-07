class Solution {
public:
    int maxVowels(string s, int k)
    {
        int maxVal = 0;
        int val = 0;
        for(int i = 0; i < k; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'||
                s[i] == 'o' || s[i] == 'u')
            {
                val++;
            }
        }
        maxVal = val;
        if(maxVal == k)
        {
            return maxVal;
        }
        for(int i = 1; i <= s.size() - k; i++)
        {
            if(s[i - 1] == 'a' || s[i -1] == 'e' || s[i-1] == 'i'||
                s[i-1] == 'o' || s[i-1] == 'u')
                {
                    val--;
                }
            if(s[i + k -1] == 'a' || s[i+k-1] == 'e' || s[i+k-1] == 'i'||
                s[i+k-1] == 'o' || s[i+k-1] == 'u')
                {
                    val++;
                }
            if(val > maxVal)
            {
                maxVal = val;
            }
            if(maxVal == k)
            {
                break;
            }
        }
        return maxVal;
    }
};