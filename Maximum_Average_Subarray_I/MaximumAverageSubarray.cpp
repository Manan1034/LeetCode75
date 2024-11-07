class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int sum = 0;
        double maxAvg = 0;
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        maxAvg = (double)sum/k;

        for(int i = 1; i <= nums.size() - k; i++)
        {
            sum = sum - nums[i - 1] + nums[i + k - 1];
            double avg = (double)sum/k;
            if(avg > maxAvg)
            {
                maxAvg = avg;
            }
        }
        return maxAvg;

    }
};