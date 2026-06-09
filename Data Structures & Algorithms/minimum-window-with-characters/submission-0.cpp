class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> need;
        for (char c : t) need[c]++;

        int required = need.size();
        int formed   = 0;           

        unordered_map<char, int> window;
        int left = 0;
        int minLen = INT_MAX, minLeft = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;
            if (need.count(c) && window[c] == need[c])
                formed++;

            while (formed == required) {

                if (right - left + 1 < minLen) {
                    minLen  = right - left + 1;
                    minLeft = left;
                }

                char lc = s[left++];
                window[lc]--;
                if (need.count(lc) && window[lc] < need[lc])
                    formed--;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minLeft, minLen);
    }
};
