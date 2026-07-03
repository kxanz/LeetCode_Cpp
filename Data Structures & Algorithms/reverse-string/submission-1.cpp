class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int front {0};
        int last = static_cast<int>(s.size()) - 1;

        while (front <= last) {
            std::swap(s[front], s[last]);
            front++;
            last--;
        }
        return;
    }
};