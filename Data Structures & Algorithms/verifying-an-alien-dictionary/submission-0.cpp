class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // Map each char to its rank in the alien alphabet
        int orderInd[26];
        for (int i = 0; i < order.size(); i++) {
            orderInd[order[i] - 'a'] = i;
        }

        for (int i = 0; i < words.size() - 1; i++) {
            const string& w1 = words[i];
            const string& w2 = words[i + 1];

            for (int j = 0; j < w1.size(); j++) {
                // w2 ran out first -> w2 is a prefix of w1 but comes before it
                if (j == w2.size()) return false;

                if (w1[j] != w2[j]) {
                    if (orderInd[w2[j] - 'a'] < orderInd[w1[j] - 'a'])
                        return false;
                    break;  // first difference decides; rest doesn't matter
                }
            }
        }
        return true;
    }
};