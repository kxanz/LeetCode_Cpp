class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;   // vector as stack, so we can sum at the end

        for (const string& op : operations) {
            if (op == "+") {
                int n = stack.size();
                stack.push_back(stack[n - 1] + stack[n - 2]);
            } else if (op == "D") {
                stack.push_back(2 * stack.back());
            } else if (op == "C") {
                stack.pop_back();
            } else {
                stack.push_back(stoi(op));   // convert string to int
            }
        }

        return accumulate(stack.begin(), stack.end(), 0);
    }
};