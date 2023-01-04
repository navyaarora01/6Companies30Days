// Microsoft Series
// question 4
// Link -https://leetcode.com/problems/rotate-function/description/
// Submission link - https://leetcode.com/problems/rotate-function/solutions/2997890/c-optimised-solution-in-o-n/

// approach: [4,3,2,6]
// F(0) = 0*4 + 1*3 + 2*2 + 3*6 = curr
// F(1) = 1*4 + 2*3 + 3*2 + 0*6
//      = curr + 4 + 3 + 2 - 3*6
//      = curr + 4 + 3 + 2 + 6 - 4*6
//      = curr + (arr_sum) - n*nums[i]

class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int sum = 0;
        for (auto x : nums)
        {
            sum += x;
        }
        int n = nums.size();
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += i * nums[i];
        }
        int ans = curr;
        for (int i = n - 1; i >= 0; i--)
        {
            curr = curr + sum - n * nums[i];
            ans = max(ans, curr);
        }
        return ans;
    }
};