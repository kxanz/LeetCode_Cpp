class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates,  target, 0, curr, res);
        return res;
    }
private:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& curr, vector<vector<int>>& res){
        if (target == 0){
            res.push_back(curr);
            return;
        }
        if (target < 0){
            return;
        }
        for (int i {start}; i < candidates.size(); i++){
            curr.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i, curr, res);
            curr.pop_back();
        }
    }
};
