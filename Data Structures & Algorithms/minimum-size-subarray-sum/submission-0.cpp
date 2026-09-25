class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, best = INT_MAX;

        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right];                 // expand

            while (sum >= target) {             // shrink while still valid
                best = min(best, right - left + 1);
                sum -= nums[left++];
            }
        }
        return best == INT_MAX ? 0 : best;
    }
};