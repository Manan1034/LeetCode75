class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int min = pow(2, 31) - 1;
        int mid = pow(2, 31) - 1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            if(nums[i] > min && nums[i] < mid)
            {
                mid = nums[i];
            }
            if(nums[i] > min && nums[i] > mid)
            {
                return true;
                break;
            }
        }
        return false;
    }
};