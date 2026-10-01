class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> res = nums;

        for (auto n : nums) {
            res.push_back(n); 
        }
        return res;
    }
};