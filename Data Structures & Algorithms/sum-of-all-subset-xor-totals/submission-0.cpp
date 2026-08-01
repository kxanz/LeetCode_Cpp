class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        for (int n :nums) {
            res = res | n;
        }
        return res * (1 << (nums.size() - 1));
    }
};