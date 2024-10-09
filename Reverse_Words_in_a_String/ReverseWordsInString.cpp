class Solution {
public:
    string reverseWords(string s)
    {
        vector<string> a;
        string res;
        int i = 0;
        int j = 0;
        while(i <= s.length())
        {
            cout<<s[i]<<endl;
            if(s[i] == ' ')
            {
                if(i != j)
                {
                    string c = s.substr(j, i - j);
                    cout<<c<<endl;
                    a.push_back(c);
                }
                j = i+1;
            }
            i++;
        }

        if(i != j + 1)
        {
            string c = s.substr(j, i - j);
            cout<<c<<endl;
            a.push_back(c);
        }

        for(int i = a.size() - 1; i >= 0; i--)
        {
            res = res + a[i];
            if(i >= 1)
            {
                res += ' ';
            }
        }
        return(res);
    }
};