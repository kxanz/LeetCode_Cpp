class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int y = stones.back(); stones.pop_back();
            int x = stones.back(); stones.pop_back();
            if (y > x) stones.push_back(y - x);
        }
        return stones.empty() ? 0 : stones[0];
    }
};