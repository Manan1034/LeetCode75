class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int great = 0;
        vector<bool> res;
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > great)
            {
                great = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= great)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;
    }
};