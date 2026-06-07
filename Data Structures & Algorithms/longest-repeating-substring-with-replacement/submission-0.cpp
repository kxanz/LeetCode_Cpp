class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0}; 
        auto maxFreq {0};
        auto left {0};
        auto result {0};

        for (auto right {0}; right < s.size(); right++)
        {
            count[s[right] - 'A']++;                   
            maxFreq = max(maxFreq, count[s[right] - 'A']);

            while ((right - left + 1) - maxFreq > k)
            {
                count[s[left] - 'A']--;
                left++;
            }
            result = max(result, right - left + 1);     
        }
        return result;
    }
};
