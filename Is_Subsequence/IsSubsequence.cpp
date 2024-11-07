class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        bool res = false;
        for(int i = 0; i < s.size(); i++)
        {
            size_t find = t.find(s[i]);
            if(find != string::npos)
            {
                res = true;
                t = t.substr(find + 1);
                find = 0;
            }
            else
            {
                res = false;
                break;
            }
        }
        if(s == "")
        {
            res = true;
        }
        return res;
    }
};