class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> delta(n + 1, 0); // incoming - outgoing = n - 1
        
        for (auto& t : trust) {
            delta[t[0]] -= 1;
            delta[t[1]] += 1;
        }
        
        for (int i = 1; i <= n; i++) {
            if (delta[i] == n - 1)
                return i;
        }
        return -1;
    }
};