class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int res = 0;
        int i = 0;
        int j = height.size() -1;
        while(i < j)
        {
            int prod;
            if(height[i] > height[j])
            {
                prod = height[j] * (j - i);
                j--;
            }
            else
            {
                prod = height[i] * (j - i);
                i++;
            }
            if(res < prod)
            {
                res = prod;
            }
        }
        return(res);
    }
};