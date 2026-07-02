class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;   // seed: empty prefix sums to 0, occurs once

        int sum = 0;
        int count = 0;

        for (int num : nums) {
            sum += num;                          // running prefix sum
            if (prefixCount.find(sum - k) != prefixCount.end()) {
                count += prefixCount[sum - k];   // add however many earlier prefixes match
            }
            prefixCount[sum]++;                  // record current prefix sum
        }

        return count;
    }
};