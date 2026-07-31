class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int next1 = 0, next2 = 0; 

        for (int i = n - 1; i >= 0; i--){
            int cur = cost[i] + min(next1, next2);
            next2 = next1;
            next1 = cur;
        }
        return min(next1, next2);
    }
};