class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        vector<int> result;

        int n = nums.size();

        for (int num : nums) {
            count[num]++;
        }
        for (auto pair : count) {
            int num = pair.first;
            int freq = pair.second;

        if (freq > n / 3){
            result.push_back(num);
            }
        }
    return result;
    }
};