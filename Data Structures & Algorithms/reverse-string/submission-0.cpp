class Solution {
public:
    void reverseString(vector<char>& s) {
        int front {0};
        int last = static_cast<int>(s.size()) - 1;

        while (front <= last) {
            swap(s[front], s[last]);
            front++;
            last--;
        }
        return;
    }
};