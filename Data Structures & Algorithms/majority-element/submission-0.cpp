class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int n { static_cast<int>(nums.size()) };;

        for (auto i{0uz}; i < nums.size(); i++){
            count[nums[i]]++;

            if (count[nums[i]] > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};