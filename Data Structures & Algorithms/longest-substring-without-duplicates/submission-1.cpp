class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        auto left {0};
        auto longest {0};

        for (auto right {0}; right < s.size(); right++) {

            while (set.count(s[right])) {
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);

            longest = max(longest, right - left + 1);
        }
        return longest; 

    }
};
