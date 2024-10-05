class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int res = 0;
        int straight = 0;
        bool first = false;
        bool last = false;

        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0)
            {
                straight++;
            }
            else
            {
                if(first == false)
                {
                    res += (straight) / 2;
                }
                else
                {
                    res += (straight - 1) / 2;
                }
                first = true;
                straight = 0;
            }
        }
        if(first == false)
        {
            res += (straight + 1)/2;
        }
        else
        {
            res += (straight /2);
        }
        if(res >= n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};