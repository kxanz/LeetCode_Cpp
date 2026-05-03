class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;

        for (int n : nums) {
            // check if it's the start of a sequence
            if (numset.find(n - 1) == numset.end()) {
                int length = 0;

                while (numset.find(n + length) != numset.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
