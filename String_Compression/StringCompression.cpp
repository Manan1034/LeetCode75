class Solution {
public:
    int compress(vector<char>& chars)
    {
        int i = 1;
        int x = 1;
        while(i < chars.size())
        {
            if(chars[i] == chars[i - 1])
            {
                chars.erase(chars.begin() + i);
                x++;
            }
            else
            {
                if(x > 1)
                {
                    vector<int> b;
                    while(x > 0)
                    {
                        int c = x % 10;
                        x /= 10;
                        b.push_back(c);
                    }
                    for(int j = b.size() - 1; j >= 0; j--)
                    {
                        chars.insert(chars.begin() + i, char(b[j]) + 48);
                        i++;
                    }
                }
                i++;
                x = 1;
            }
        }
        if(x > 1)
        {
            vector<int> b;
            while(x > 0)
            {
                int c = x % 10;
                x /= 10;
                b.push_back(c);
            }
            for(int j = b.size() -1 ; j >= 0; j--)
            {
                chars.insert(chars.begin() + i, char(b[j]) + 48);
                i++;
            }
        }
        return(chars.size());   
    }
};